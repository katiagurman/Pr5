#pragma once

namespace Pr5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ ñîçäàòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ îòêğûòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ ñîõğàíèòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ ïå÷àòüToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^ âûğåçàòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ êîïèğîâàòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ âñòàâêàToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ ñïğàâêàToolStripButton;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton6;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton7;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton8;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïåğåãëÿäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàíåë³ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğÿäîêÑòàíóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàíåëü²íñòğóìåíò³âToolStripMenuItem;


	private: System::ComponentModel::IContainer^ components;
	protected:


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->ñîçäàòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->îòêğûòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->ñîõğàíèòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->ïå÷àòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûğåçàòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->êîïèğîâàòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->âñòàâêàToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ñïğàâêàToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ïåğåãëÿäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàíåë³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğÿäîêÑòàíóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàíåëü²íñòğóìåíò³âToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(20) {
				this->ñîçäàòüToolStripButton,
					this->îòêğûòüToolStripButton, this->ñîõğàíèòüToolStripButton, this->ïå÷àòüToolStripButton, this->toolStripSeparator, this->âûğåçàòüToolStripButton,
					this->êîïèğîâàòüToolStripButton, this->âñòàâêàToolStripButton, this->toolStripSeparator1, this->ñïğàâêàToolStripButton, this->toolStripSeparator2,
					this->toolStripButton1, this->toolStripButton2, this->toolStripButton3, this->toolStripButton4, this->toolStripButton5, this->toolStripButton6,
					this->toolStripSeparator3, this->toolStripButton7, this->toolStripButton8
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(622, 27);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// ñîçäàòüToolStripButton
			// 
			this->ñîçäàòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ñîçäàòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñîçäàòüToolStripButton.Image")));
			this->ñîçäàòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñîçäàòüToolStripButton->Name = L"ñîçäàòüToolStripButton";
			this->ñîçäàòüToolStripButton->Size = System::Drawing::Size(29, 24);
			this->ñîçäàòüToolStripButton->Text = L"&Ñîçäàòü";
			this->ñîçäàòüToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::ñîçäàòüToolStripButton_Click);
			// 
			// îòêğûòüToolStripButton
			// 
			this->îòêğûòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->îòêğûòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"îòêğûòüToolStripButton.Image")));
			this->îòêğûòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->îòêğûòüToolStripButton->Name = L"îòêğûòüToolStripButton";
			this->îòêğûòüToolStripButton->Size = System::Drawing::Size(29, 24);
			this->îòêğûòüToolStripButton->Text = L"&Îòêğûòü";
			this->îòêğûòüToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::îòêğûòüToolStripButton_Click);
			// 
			// ñîõğàíèòüToolStripButton
			// 
			this->ñîõğàíèòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ñîõğàíèòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñîõğàíèòüToolStripButton.Image")));
			this->ñîõğàíèòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñîõğàíèòüToolStripButton->Name = L"ñîõğàíèòüToolStripButton";
			this->ñîõğàíèòüToolStripButton->Size = System::Drawing::Size(29, 24);
			this->ñîõğàíèòüToolStripButton->Text = L"&Ñîõğàíèòü";
			this->ñîõğàíèòüToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::ñîõğàíèòüToolStripButton_Click);
			// 
			// ïå÷àòüToolStripButton
			// 
			this->ïå÷àòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ïå÷àòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ïå÷àòüToolStripButton.Image")));
			this->ïå÷àòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ïå÷àòüToolStripButton->Name = L"ïå÷àòüToolStripButton";
			this->ïå÷àòüToolStripButton->Size = System::Drawing::Size(29, 24);
			this->ïå÷àòüToolStripButton->Text = L"&Ïå÷àòü";
			this->ïå÷àòüToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::ïå÷àòüToolStripButton_Click);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 27);
			// 
			// âûğåçàòüToolStripButton
			// 
			this->âûğåçàòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->âûğåçàòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"âûğåçàòüToolStripButton.Image")));
			this->âûğåçàòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->âûğåçàòüToolStripButton->Name = L"âûğåçàòüToolStripButton";
			this->âûğåçàòüToolStripButton->Size = System::Drawing::Size(29, 24);
			this->âûğåçàòüToolStripButton->Text = L"Â&ûğåçàòü";
			this->âûğåçàòüToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::âûğåçàòüToolStripButton_Click);
			// 
			// êîïèğîâàòüToolStripButton
			// 
			this->êîïèğîâàòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->êîïèğîâàòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"êîïèğîâàòüToolStripButton.Image")));
			this->êîïèğîâàòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->êîïèğîâàòüToolStripButton->Name = L"êîïèğîâàòüToolStripButton";
			this->êîïèğîâàòüToolStripButton->Size = System::Drawing::Size(29, 24);
			this->êîïèğîâàòüToolStripButton->Text = L"&Êîïèğîâàòü";
			this->êîïèğîâàòüToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::êîïèğîâàòüToolStripButton_Click);
			// 
			// âñòàâêàToolStripButton
			// 
			this->âñòàâêàToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->âñòàâêàToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"âñòàâêàToolStripButton.Image")));
			this->âñòàâêàToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->âñòàâêàToolStripButton->Name = L"âñòàâêàToolStripButton";
			this->âñòàâêàToolStripButton->Size = System::Drawing::Size(29, 24);
			this->âñòàâêàToolStripButton->Text = L"Âñò&àâêà";
			this->âñòàâêàToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::âñòàâêàToolStripButton_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 27);
			// 
			// ñïğàâêàToolStripButton
			// 
			this->ñïğàâêàToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ñïğàâêàToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñïğàâêàToolStripButton.Image")));
			this->ñïğàâêàToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñïğàâêàToolStripButton->Name = L"ñïğàâêàToolStripButton";
			this->ñïğàâêàToolStripButton->Size = System::Drawing::Size(29, 24);
			this->ñïğàâêàToolStripButton->Text = L"Ñïğ&àâêà";
			this->ñïğàâêàToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::ñïğàâêàToolStripButton_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(29, 24);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->ToolTipText = L"Âèğ³âíşâàííÿ ïî ë³â³é ñòîğîí³";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(29, 24);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->ToolTipText = L"Âèğ³âíşâàííÿ ïî öåíòğó";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(29, 24);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->ToolTipText = L"Âèğ³âíşâàííÿ ïî ïğàâ³é ñòîğîí³";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton3_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(29, 24);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->ToolTipText = L"Æèğíèé øğèôò";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton4_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(29, 24);
			this->toolStripButton5->Text = L"toolStripButton5";
			this->toolStripButton5->ToolTipText = L"Êóğñèâîì";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton5_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(29, 24);
			this->toolStripButton6->Text = L"toolStripButton6";
			this->toolStripButton6->ToolTipText = L"Ï³äêğåñëåííÿ";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton6_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(29, 24);
			this->toolStripButton7->Text = L"toolStripButton7";
			this->toolStripButton7->ToolTipText = L"Â³äì³íèòè ä³ş";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton7_Click);
			// 
			// toolStripButton8
			// 
			this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton8.Image")));
			this->toolStripButton8->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton8->Name = L"toolStripButton8";
			this->toolStripButton8->Size = System::Drawing::Size(29, 24);
			this->toolStripButton8->Text = L"toolStripButton8";
			this->toolStripButton8->ToolTipText = L"Ïîâåğíóòè ä³ş";
			this->toolStripButton8->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton8_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 55);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richTextBox1->Size = System::Drawing::Size(622, 343);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 372);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(622, 26);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			this->statusStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::statusStrip1_ItemClicked);
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(151, 20);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(151, 20);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ïåğåãëÿäToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(622, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ïåğåãëÿäToolStripMenuItem
			// 
			this->ïåğåãëÿäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ïàíåë³ToolStripMenuItem });
			this->ïåğåãëÿäToolStripMenuItem->Name = L"ïåğåãëÿäToolStripMenuItem";
			this->ïåğåãëÿäToolStripMenuItem->Size = System::Drawing::Size(89, 24);
			this->ïåğåãëÿäToolStripMenuItem->Text = L"Ïåğåãëÿä";
			// 
			// ïàíåë³ToolStripMenuItem
			// 
			this->ïàíåë³ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ğÿäîêÑòàíóToolStripMenuItem,
					this->ïàíåëü²íñòğóìåíò³âToolStripMenuItem
			});
			this->ïàíåë³ToolStripMenuItem->Name = L"ïàíåë³ToolStripMenuItem";
			this->ïàíåë³ToolStripMenuItem->Size = System::Drawing::Size(140, 26);
			this->ïàíåë³ToolStripMenuItem->Text = L"Ïàíåë³";
			// 
			// ğÿäîêÑòàíóToolStripMenuItem
			// 
			this->ğÿäîêÑòàíóToolStripMenuItem->CheckOnClick = true;
			this->ğÿäîêÑòàíóToolStripMenuItem->Name = L"ğÿäîêÑòàíóToolStripMenuItem";
			this->ğÿäîêÑòàíóToolStripMenuItem->Size = System::Drawing::Size(236, 26);
			this->ğÿäîêÑòàíóToolStripMenuItem->Text = L"Ğÿäîê ñòàíó";
			this->ğÿäîêÑòàíóToolStripMenuItem->CheckStateChanged += gcnew System::EventHandler(this, &MyForm::ğÿäîêÑòàíóToolStripMenuItem_CheckStateChanged);
			// 
			// ïàíåëü²íñòğóìåíò³âToolStripMenuItem
			// 
			this->ïàíåëü²íñòğóìåíò³âToolStripMenuItem->CheckOnClick = true;
			this->ïàíåëü²íñòğóìåíò³âToolStripMenuItem->Name = L"ïàíåëü²íñòğóìåíò³âToolStripMenuItem";
			this->ïàíåëü²íñòğóìåíò³âToolStripMenuItem->Size = System::Drawing::Size(236, 26);
			this->ïàíåëü²íñòğóìåíò³âToolStripMenuItem->Text = L"Ïàíåëü ³íñòğóìåíò³â";
			this->ïàíåëü²íñòğóìåíò³âToolStripMenuItem->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ïàíåëü²íñòğóìåíò³âToolStripMenuItem_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(622, 398);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Pr5";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void âûğåçàòüToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Cut();
		toolStripStatusLabel1->Text = "Âèğ³çàòè";
	}
private: System::Void êîïèğîâàòüToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Copy();
	toolStripStatusLabel1->Text = "Êîï³şâàòè";
}
private: System::Void âñòàâêàToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Paste();
	toolStripStatusLabel1->Text = "Âñòàâèòè";
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionAlignment = HorizontalAlignment::Left;
	toolStripStatusLabel1->Text = "Âèğ³âíşâàííÿ ïî ë³âîìó êğàş";
}
private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionAlignment = HorizontalAlignment::Center;
	toolStripStatusLabel1->Text = "Âèğ³âíşâàííÿ ïî öåíòğó";
}
private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionAlignment = HorizontalAlignment::Right;
	toolStripStatusLabel1->Text = "Âèğ³âíşâàííÿ ïî ïğàâîìó êğàş";
}
private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->SelectionFont->Bold)
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style & ~FontStyle::Bold);
	else
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Bold);
	toolStripStatusLabel1->Text = "Æèğíèé øğèôò";
}
private: System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->SelectionFont->Bold)
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style & ~FontStyle::Italic);
	else
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Italic);
	toolStripStatusLabel1->Text = "Êóğñèâîì";
}
private: System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->SelectionFont->Bold)
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style & ~FontStyle::Underline);
	else
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Underline);
	toolStripStatusLabel1->Text = "Ï³äêğåñëèííÿ";
}
private: System::Void toolStripButton7_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Undo();
	toolStripStatusLabel1->Text = "Â³äì³íèòè ä³ş";
}
private: System::Void toolStripButton8_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Redo();
	toolStripStatusLabel1->Text = "Ïîâåğíóòè ä³ş";
}
private: System::Void toolTip1_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
}
private: System::Void ñîçäàòüToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	toolStripStatusLabel1->Text = "Ñòâîğèòè";
}
private: System::Void îòêğûòüToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	toolStripStatusLabel1->Text = "Â³äêğèòè";
}
private: System::Void ñîõğàíèòüToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	toolStripStatusLabel1->Text = "Çáåğåãòè";
}
private: System::Void ïå÷àòüToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	toolStripStatusLabel1->Text = "Äğóê";
}
private: System::Void ñïğàâêàToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	toolStripStatusLabel1->Text = "Ñïğàâêà";
}
private: System::Void toolStripStatusLabel2_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void statusStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	statusStrip1->Items[1]->Text = DateTime::Now.ToLongDateString();
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	statusStrip1->Visible = false;
	toolStrip1->Visible = false;
}
private: System::Void ğÿäîêÑòàíóToolStripMenuItem_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
	bool prap;
	if (ğÿäîêÑòàíóToolStripMenuItem->Checked)
		prap = true;
	else
		prap = false;
	if (prap == true)
	{
		toolStrip1->Visible = true;
	}
	else
	{
		toolStrip1->Visible = false;
	}
}
private: System::Void ïàíåëü²íñòğóìåíò³âToolStripMenuItem_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	bool prap;
	if (ïàíåëü²íñòğóìåíò³âToolStripMenuItem->Checked)
		prap = true;
	else
		prap = false;
	if (prap == true)
	{
		statusStrip1->Visible = true;
	}
	else
	{
		statusStrip1->Visible = false;
	}
}
};
}
