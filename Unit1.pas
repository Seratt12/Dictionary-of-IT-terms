Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure vScrollBar1_Scroll(sender: Object; e: ScrollEventArgs);
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure propertyGrid1_Click(sender: Object; e: EventArgs);
    procedure comboBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    answer: &Label;
    button1: Button;
    button2: Button;
    comboBox1: ComboBox;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.vScrollBar1_Scroll(sender: Object; e: ScrollEventArgs);
begin
  
end;

var terms: array of string;
var definitions: array of string;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  
  // Чтение файла
  var list := ReadAllLines('termins.txt', Encoding.UTF8);
  
  var count := Round(list.Length / 2);
  SetLength(terms, count);
  SetLength(definitions, count);
  
  // Распределение терминов и определений
  var j := 0;
  var z : string;
  for var i := 0 to list.Length - 1 step 2 do
  begin
    z := list[i];
    terms[j] := z[1].ToUpper + z[2:].ToLower;
    definitions[j] := list[i + 1];
    j += 1;
  end;
  
  for var i := 0 to terms.Length - 1 do
    comboBox1.Items.Add(terms[i]);
end;

procedure Form1.propertyGrid1_Click(sender: Object; e: EventArgs);
begin
end;

procedure Form1.comboBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  var flag := true;
  var search := comboBox1.Text.ToString;
  if search.Length >= 2 then
    search := search[1].ToUpper + search[2:].ToLower
  else
  begin
    flag := false;
    answer.Text := 'Ничего не введено';
    end;
  var ind := terms.FindIndex(x -> x = search);
  
  if (ind = -1) and flag then
    answer.Text := 'Введено слово, которого нет в словаре'
  else
    if flag then
      answer.Text := (terms[ind] + ' ' + definitions[ind]);
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  Form1.ActiveForm.Close;
end;
  
end.
