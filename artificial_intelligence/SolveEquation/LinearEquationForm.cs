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
    public partial class LinearEquationForm : Form
    {
        private TextBox[,] textBoxArray;
        private TextBox[] ansTextBoxArray;
        //private int noOfUnknowns;
        private Button buttonOK, buttonCancel;

        public LinearEquationForm(int num)
        {
            InitializeComponent();
            //noOfUnknowns = num;
            LoadInputLabelsTextBoxes(num);
            LoadButtons(num);
        }

        private void LinearEquationForm_Load(object sender, EventArgs e)
        {
            //LoadInputLabelsTextBoxes(noOfUnknowns);
        }

        private void LoadInputLabelsTextBoxes(int num)
        {
            Point stPt = new Point(25, 50);
            const int gapLT = 20, gapTL = 0;
            const int lableLength = 30, txtBoxLength = 40;
            const int gapRow = 40;
            //Labels and TextBoxes for Giving inputs
            textBoxArray = new TextBox[num, num+1];
            ansTextBoxArray = new TextBox[num];

            int tGapX = txtBoxLength + gapTL + lableLength + gapLT;

            for (int i = 0; i < num; i++)
            {
                for (int j = 0; j < num + 1; j++)
                {
                    //Create TextBox
                    TextBox textBox = new TextBox();
                    textBox.Location = new Point(stPt.X + tGapX * j, stPt.Y + i * gapRow);
                    textBox.Size = new Size(txtBoxLength, 20);
                    textBox.Text = "0";

                    this.Controls.Add(textBox);
                    textBoxArray[i, j] = textBox;

                    //Create Lable
                    Label label = new Label();
                    label.Location = new Point(stPt.X+ lableLength+ gapLT + tGapX * j, 3+stPt.Y + i * gapRow);
                    label.Size = new Size(lableLength, 13);
                    if (j < num - 1)
                        label.Text = "X" + (j + 1).ToString() + " +";
                    else if (j == num - 1)
                        label.Text = "X" + (j + 1).ToString() + " =";
                    else
                        continue;

                    this.Controls.Add(label);
                }

                //Create TextBox for Answers
                TextBox txtBox = new TextBox();
                txtBox.Location = new Point(stPt.X + lableLength + gapTL + tGapX * i, stPt.Y + (num+2) * gapRow);
                txtBox.Size = new Size(txtBoxLength+20, 20);
                txtBox.ReadOnly = true;

                this.Controls.Add(txtBox);
                ansTextBoxArray[i] = txtBox;

                //Create Lable for answer
                Label lbl = new Label();
                lbl.Location = new Point(stPt.X + tGapX * i, 3 + stPt.Y + (num+2) * gapRow);
                lbl.Size = new Size(lableLength, 13);
                lbl.Text = "X" + (i + 1).ToString() + " =";

                this.Controls.Add(lbl);
            }

            this.Size = new Size(stPt.X + tGapX * (num+1), 170 + stPt.Y + num * gapRow);
        }

        private void LoadButtons(int num)
        {
            int lenX = 90, lenY = 40;
            buttonOK = new Button();
            buttonOK.Location = new Point(-70 + (num - 1) * lenX, 25 + (num + 1) * lenY);
            buttonOK.Size = new Size(75, 23);
            buttonOK.Text = "Calculate";
            buttonOK.Click += new EventHandler(buttonOK_Clicked);

            buttonCancel = new Button();
            buttonCancel.Location = new Point(-70 + num * lenX, 25 + (num + 1) * lenY);
            buttonCancel.Size = new Size(75, 23);
            buttonCancel.Text = "Cancel";
            buttonCancel.Click += new EventHandler(buttonCancel_Clicked);

            this.Controls.Add(buttonOK);
            this.Controls.Add(buttonCancel);
        }

        private void buttonOK_Clicked(object sender, EventArgs e)
        {
            int length = textBoxArray.GetLength(0);
            double[,] equMatrix = new double[length, length + 1];

            for (int i = 0; i < length; i++)
            {
                for (int j = 0; j < length + 1; j++)
                {
                    try
                    {
                        double val = Double.Parse(textBoxArray[i, j].Text);
                        equMatrix[i, j] = val;
                    }
                    catch (FormatException ex)
                    {
                    }
                }
            }

            try
            {
                double[] ans = SolveEquations.SolveLinearEquation(equMatrix);

                for (int i = 0; i < length; i++)
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

        private void textBox_Leave(object sender, EventArgs e)
        {            
        }
    }
}
