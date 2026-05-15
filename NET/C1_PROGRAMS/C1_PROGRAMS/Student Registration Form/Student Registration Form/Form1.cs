namespace Student_Registration_Form
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string name = textBox1.Text;

            string gender = "";

            if (radioButton1.Checked)
            {
                gender = "Male";
            }
            else if (radioButton2.Checked)
            {
                gender = "Female";
            }

            string course = comboBox1.Text;

            MessageBox.Show(
                "Student Registered Successfully\n\n" +
                "Name: " + name +
                "\nGender: " + gender +
                "\nCourse: " + course
            );
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void button1_MouseHover(object sender, EventArgs e)
        {
            label5.Text = "Click to Submit Form";
        }



        private void button1_MouseLeave(object sender, EventArgs e)
        {
            label5.Text = "Dev By Theerthananda";
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

    }
}