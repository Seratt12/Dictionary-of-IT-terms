procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.comboBox1 := new System.Windows.Forms.ComboBox();
        self.answer := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // comboBox1
        // 
        self.comboBox1.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.comboBox1.FormattingEnabled := true;
        self.comboBox1.Location := new System.Drawing.Point(12, 13);
        self.comboBox1.Name := 'comboBox1';
        self.comboBox1.Size := new System.Drawing.Size(353, 24);
        self.comboBox1.TabIndex := 2;
        self.comboBox1.Text := 'Вводи сюда термин';
        self.comboBox1.SelectedIndexChanged += comboBox1_SelectedIndexChanged;
        // 
        // answer
        // 
        self.answer.Font := new System.Drawing.Font('Microsoft Sans Serif', 12, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.answer.Location := new System.Drawing.Point(12, 56);
        self.answer.Name := 'answer';
        self.answer.Size := new System.Drawing.Size(460, 253);
        self.answer.TabIndex := 3;
        // 
        // button1
        // 
        self.button1.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button1.Location := new System.Drawing.Point(381, 13);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(91, 24);
        self.button1.TabIndex := 4;
        self.button1.Text := 'Найти';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(335, 323);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(137, 26);
        self.button2.TabIndex := 5;
        self.button2.Text := 'Выход';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(484, 361);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.answer);
        self.Controls.Add(self.comboBox1);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximumSize := new System.Drawing.Size(500, 400);
        self.MinimizeBox := false;
        self.MinimumSize := new System.Drawing.Size(500, 400);
        self.Name := 'Form1';
        self.Text := 'Словарь IT-терминов';
        self.Load += Form1_Load;
        self.ResumeLayout(false);
    end;
