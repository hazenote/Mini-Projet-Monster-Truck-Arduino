using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO.Ports;

namespace TélecommandeV1._1
{

    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
             System.Windows.Forms.TextBox.CheckForIllegalCrossThreadCalls = false;
        }

        ~Form1()
        {
            serialPort1.Close();
        }

        private void UpdatePorts()
        {
            string[] ports = SerialPort.GetPortNames();
            foreach (string port in ports)
            {
                comboBox1.Items.Add(port);
                textBox1.AppendText("Port : "+port.ToString());
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            UpdatePorts();
        }

      
          

            private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
            {

            }

            private void button1_Click(object sender, EventArgs e)
            {
                //serialPort1.Open();
                serialPort1.Write("A");
                //serialPort1.Close();
            }

            private void button6_Click(object sender, EventArgs e)
            {
                //serialPort1.Open();
                serialPort1.Write("D");
                //serialPort1.Close();
            }

            private void button8_Click(object sender, EventArgs e)
            {
                if (serialPort1.IsOpen)
            {
                deconnect();
            }
            else
            {
                connect();
            }
        }

        private void connect()
        {
            bool erreur = false;
            if (comboBox1.SelectedIndex != -1)
            {
                serialPort1.PortName = comboBox1.Text;
                                
                try
                {
                    serialPort1.Open();
                    textBox1.AppendText("-- Connexion -- \n");
                }
                catch (UnauthorizedAccessException) { erreur = true; }
                catch (System.IO.IOException) { erreur = true; }
                catch (ArgumentException) { erreur = true; }
                if (erreur == true)
                    MessageBox.Show(this, "Erreur à l'ouverture du port COM", "Port série non valide.", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            else
            {
                MessageBox.Show("Vous devez sélectionner un port COM !!");
            }
            if (serialPort1.IsOpen)
            {
                button8.Text = "Déconnection";
                //button2.Enabled = true;
              //  groupBox1.Enabled = false;
            }
        }

        private void deconnect()
        {
            serialPort1.Close();
            button8.Text = "Connexion";
            //button2.Enabled = false;
         //   groupBox1.Enabled = true;
            textBox1.AppendText("-- Deconnexion -- \n");
        }

        private void button3_Click(object sender, EventArgs e)
        {
            //serialPort1.Open();
            serialPort1.Write("A");
            //serialPort1.Close();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            //serialPort1.Open();
            serialPort1.Write("E");
            //serialPort1.Close();
        }

        private void button7_Click(object sender, EventArgs e)
        {
            //serialPort1.Open();
            serialPort1.Write("B");
            //serialPort1.Close();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            //serialPort1.Open();
            serialPort1.Write("F");
            //serialPort1.Close();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            //serialPort1.Open();
            serialPort1.Write("C");
            //serialPort1.Close();
        }

        private void Form1_Load_1(object sender, EventArgs e)
        {
            UpdatePorts();

        }

        private void webBrowser1_DocumentCompleted(object sender, WebBrowserDocumentCompletedEventArgs e)
        {

        }

        private void button9_Click(object sender, EventArgs e)
        {
            this.webBrowser1.Navigate("http://admin:@10.73.8.53");
            //Form1.Size = new System.Drawing.Size(100, 100);
            //pictureBox1.Load("http://10.73.8.53/s/2345?login=admin&password=" );
        }
        
        private void pictureBox1_Click(object sender, EventArgs e)
        {
            
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void pictureBox1_Click_1(object sender, EventArgs e)
        {
            pictureBox1.Image = Image.FromFile("C:/Images/téléchargement.jpg");
        }


        protected override void OnKeyDown(KeyEventArgs e)
        {
            if (e.KeyCode == Keys.NumPad8 || e.KeyCode == Keys.D8)
                BTN.Text = ("Commande recue : AVANCER");
                serialPort1.Write("A");

            if (e.KeyCode == Keys.NumPad6 || e.KeyCode == Keys.D6)
                BTN.Text = ("Commande recue : DROITE");
                serialPort1.Write("D");

            if (e.KeyCode == Keys.NumPad4 || e.KeyCode == Keys.D4)
                BTN.Text = ("Commande recue : GAUCHE");
                serialPort1.Write("E");

            if (e.KeyCode == Keys.NumPad2 || e.KeyCode == Keys.D2)
                BTN.Text = ("Commande recue : BAS");
                serialPort1.Write("C");
        }

        private void BTN_Click(object sender, EventArgs e)
        {

        }




            }
        }


            
    
