namespace Fact
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            long n = int.Parse(textBox1.Text);
            long fact = 1;
            for (int i = 1; i <= n; i++)
            {
                fact *= i;
            }

            label3.Text = "Factorial of " + n + " is :";
            textBox2.Text = fact.ToString();

        }
    }
}
