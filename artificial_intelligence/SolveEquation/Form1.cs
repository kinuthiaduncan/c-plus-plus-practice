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
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Environment.Exit(0);
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void radioButtonLinear_CheckedChanged(object sender, EventArgs e)
        {
            label.Text = "Input No of unknowns";
            textBoxNum.Location = new Point(139, 103);
        }

        private void radioButtonPolynomial_CheckedChanged(object sender, EventArgs e)
        {
            label.Text = "Input Order of the Equation";
            textBoxNum.Location = new Point(159, 103);
        }

        private void textBoxNum_MaskInputRejected(object sender, MaskInputRejectedEventArgs e)
        {
            //if(textBoxNum.Text
        }

        private void textBoxNum_TextAlignChanged(object sender, EventArgs e)
        {

        }

        private void textBoxNum_TextChanged(object sender, EventArgs e)
        {
            if (textBoxNum.Text != "")
                buttonOK.Enabled = true;
            else
                buttonOK.Enabled = false;
        }

        private void buttonOK_Click(object sender, EventArgs e)
        {
            try
            {
                int num = Int16.Parse(textBoxNum.Text);
                if (num > 1)
                {
                    if (num <= 10)
                    {
                        if (radioButtonLinear.Checked)
                        {
                            LinearEquationForm linearEquationForm = new LinearEquationForm(num);
                            linearEquationForm.StartPosition = FormStartPosition.CenterScreen;
                            //linearEquationForm.FormBorderStyle = FormBorderStyle.Sizable;
                            linearEquationForm.Show();
                        }
                        else
                        {
                            PolynomialEquationForm polyEquationForm = new PolynomialEquationForm(num);
                            polyEquationForm.StartPosition = FormStartPosition.CenterScreen;
                            polyEquationForm.Show();
                        }
                    }
                    else
                        MessageBox.Show("No of unknowns are too high");
                }
                else
                    MessageBox.Show("No of unknowns are not enough to solve");
            }
            catch (InvalidCastException ex)
            {
                MessageBox.Show(ex.Message);
            }
        }
    }
}
