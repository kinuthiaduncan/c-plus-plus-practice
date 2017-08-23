using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace SolveEquation
{
    public partial class PolynomialEquationForm : Form
    {
        private TextBox[] textBoxArray;
        private TextBox[] ansTextBoxArray;
        private Button buttonOK, buttonCancel;

        public PolynomialEquationForm(int num)
        {
            InitializeComponent();

            LoadInputLabelsTextBoxes(num);
            LoadButtons(num);
        }

        private void LoadInputLabelsTextBoxes(int num)
        {
            Point stPt = new Point(25, 50);
            const int gapLT = 10, gapTL = 0;
            const int lableLength = 40, txtBoxLength = 40;

            //Labels and TextBoxes for Giving inputs
            textBoxArray = new TextBox[num+1];
            ansTextBoxArray = new TextBox[num];

            int tGapX = txtBoxLength + lableLength;
            for (int i = 0; i < num+1; i++)
            {
                //int tGapX = txtBoxLength + lableLength;

                //Create TextBox
                TextBox textBox = new TextBox();
                textBox.Location = new Point(stPt.X + tGapX * i, stPt.Y);
                textBox.Size = new Size(txtBoxLength, 20);
                textBox.Text = "0";

                this.Controls.Add(textBox);
                textBoxArray[i] = textBox;

                //Create Lable
                Label label = new Label();
                label.Location = new Point(stPt.X + txtBoxLength + tGapX * i, 3 + stPt.Y);
                label.Size = new Size(lableLength, 13);
                if (i < num)
                    label.Text = "X^" + (num - i).ToString() + " +";
                else                
                    label.Text = " = 0";                

                this.Controls.Add(label);
                
            }

            tGapX += gapLT+10;
            for (int i = 0; i < num; i++)
            {
                //int tGapX = txtBoxLength + lableLength + gapLT;

                //Create TextBox for Answers
                TextBox txtBox = new TextBox();
                txtBox.Location = new Point(stPt.X + lableLength-10 + tGapX * i, stPt.Y + 100);
                txtBox.Size = new Size(txtBoxLength+20, 20);
                txtBox.ReadOnly = true;                
                this.Controls.Add(txtBox);
                ansTextBoxArray[i] = txtBox;

                //Create Lable for answer
                Label lbl = new Label();
                lbl.Location = new Point(stPt.X + tGapX * i, 3 + stPt.Y + 100);
                lbl.Size = new Size(lableLength-10, 13);
                lbl.Text = "X" + (i + 1).ToString() + " =";

                this.Controls.Add(lbl);
            }
            this.Size = new Size(2*stPt.X + num * tGapX /*+ txtBoxLength*/, 250);
        }

        private void LoadButtons(int num)
        {
            int lenX = 90;
            buttonOK = new Button();
            buttonOK.Location = new Point(-70 + (num - 1) * lenX, 100);
            buttonOK.Size = new Size(75, 23);
            buttonOK.Text = "Calculate";
            buttonOK.Click += new EventHandler(buttonOK_Clicked);

            buttonCancel = new Button();
            buttonCancel.Location = new Point(-70 + num * lenX, 100);
            buttonCancel.Size = new Size(75, 23);
            buttonCancel.Text = "Cancel";
            buttonCancel.Click += new EventHandler(buttonCancel_Clicked);

            this.Controls.Add(buttonOK);
            this.Controls.Add(buttonCancel);
        }

        private void buttonOK_Clicked(object sender, EventArgs e)
        {
            List<double> coeff = new List<double>();
            for (int i = 0; i < textBoxArray.GetLength(0); i++)
            {
                try
                {
                    double val = Double.Parse(textBoxArray[i].Text);
                    coeff.Add(val);
                }
                catch (FormatException ex)
                {
                    MessageBox.Show(ex.Message);
                }
            }

            try
            {
                List<double> ans = SolveEquations.SolvePolynomialEquation(coeff);

                for (int i = 0; i < ans.Count; i++)
                {
                    ansTextBoxArray[i].Text = ans[i].ToString();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void buttonCancel_Clicked(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
