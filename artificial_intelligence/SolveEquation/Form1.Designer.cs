namespace SolveEquation
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.radioButtonLinear = new System.Windows.Forms.RadioButton();
            this.radioButtonPolynomial = new System.Windows.Forms.RadioButton();
            this.label = new System.Windows.Forms.Label();
            this.buttonOK = new System.Windows.Forms.Button();
            this.buttonExit = new System.Windows.Forms.Button();
            this.textBoxNum = new System.Windows.Forms.MaskedTextBox();
            this.SuspendLayout();
            // 
            // radioButtonLinear
            // 
            this.radioButtonLinear.AutoSize = true;
            this.radioButtonLinear.Location = new System.Drawing.Point(24, 34);
            this.radioButtonLinear.Name = "radioButtonLinear";
            this.radioButtonLinear.Size = new System.Drawing.Size(99, 17);
            this.radioButtonLinear.TabIndex = 0;
            this.radioButtonLinear.TabStop = true;
            this.radioButtonLinear.Text = "Linear Equation";
            this.radioButtonLinear.UseVisualStyleBackColor = true;
            this.radioButtonLinear.CheckedChanged += new System.EventHandler(this.radioButtonLinear_CheckedChanged);
            // 
            // radioButtonPolynomial
            // 
            this.radioButtonPolynomial.AutoSize = true;
            this.radioButtonPolynomial.Location = new System.Drawing.Point(24, 57);
            this.radioButtonPolynomial.Name = "radioButtonPolynomial";
            this.radioButtonPolynomial.Size = new System.Drawing.Size(123, 17);
            this.radioButtonPolynomial.TabIndex = 1;
            this.radioButtonPolynomial.TabStop = true;
            this.radioButtonPolynomial.Text = "Polynomial  Equation";
            this.radioButtonPolynomial.UseVisualStyleBackColor = true;
            this.radioButtonPolynomial.CheckedChanged += new System.EventHandler(this.radioButtonPolynomial_CheckedChanged);
            // 
            // label
            // 
            this.label.AutoSize = true;
            this.label.Location = new System.Drawing.Point(21, 106);
            this.label.Name = "label";
            this.label.Size = new System.Drawing.Size(35, 13);
            this.label.TabIndex = 2;
            this.label.Text = "label1";
            this.label.Click += new System.EventHandler(this.label1_Click);
            // 
            // buttonOK
            // 
            this.buttonOK.Enabled = false;
            this.buttonOK.Location = new System.Drawing.Point(103, 150);
            this.buttonOK.Name = "buttonOK";
            this.buttonOK.Size = new System.Drawing.Size(75, 23);
            this.buttonOK.TabIndex = 4;
            this.buttonOK.Text = "OK";
            this.buttonOK.UseVisualStyleBackColor = true;
            this.buttonOK.Click += new System.EventHandler(this.buttonOK_Click);
            // 
            // buttonExit
            // 
            this.buttonExit.Location = new System.Drawing.Point(184, 150);
            this.buttonExit.Name = "buttonExit";
            this.buttonExit.Size = new System.Drawing.Size(75, 23);
            this.buttonExit.TabIndex = 5;
            this.buttonExit.Text = "Exit";
            this.buttonExit.UseVisualStyleBackColor = true;
            this.buttonExit.Click += new System.EventHandler(this.button2_Click);
            // 
            // textBoxNum
            // 
            this.textBoxNum.Location = new System.Drawing.Point(139, 103);
            this.textBoxNum.Mask = "00";
            this.textBoxNum.Name = "textBoxNum";
            this.textBoxNum.Size = new System.Drawing.Size(20, 20);
            this.textBoxNum.TabIndex = 6;
            this.textBoxNum.MaskInputRejected += new System.Windows.Forms.MaskInputRejectedEventHandler(this.textBoxNum_MaskInputRejected);
            this.textBoxNum.TextAlignChanged += new System.EventHandler(this.textBoxNum_TextAlignChanged);
            this.textBoxNum.TextChanged += new System.EventHandler(this.textBoxNum_TextChanged);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(296, 214);
            this.Controls.Add(this.textBoxNum);
            this.Controls.Add(this.buttonExit);
            this.Controls.Add(this.buttonOK);
            this.Controls.Add(this.label);
            this.Controls.Add(this.radioButtonPolynomial);
            this.Controls.Add(this.radioButtonLinear);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
            this.MaximizeBox = false;
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.RadioButton radioButtonLinear;
        private System.Windows.Forms.RadioButton radioButtonPolynomial;
        private System.Windows.Forms.Label label;
        private System.Windows.Forms.Button buttonOK;
        private System.Windows.Forms.Button buttonExit;
        private System.Windows.Forms.MaskedTextBox textBoxNum;
    }
}

