unit aplikasi;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  ExtCtrls, StdCtrls, Buttons, Db, DBTables, Grids, DBGrids, OleCtrls,
  DateUtils, Math, QDialogs, MSCommLib_TLB, ComObj, TeEngine,
  Series, TeeProcs, Chart;

type
  TfrmAplikasi = class(TForm)
    MSComm1: TMSComm;
    GroupBox1: TGroupBox;
    btConnect: TBitBtn;
    btRunning: TBitBtn;
    btClear: TBitBtn;
    btExit: TBitBtn;
    Label8: TLabel;
    Button1: TButton;
    Button2: TButton;
    Shape1: TShape;
    Shape2: TShape;
    Edit1: TEdit;
    Button3: TButton;
    Button4: TButton;
    Button5: TButton;
    Button6: TButton;
    Shape3: TShape;
    Shape4: TShape;
    Shape5: TShape;
    Shape6: TShape;
    Button7: TButton;
    Button8: TButton;
    procedure btExitClick(Sender: TObject);
    procedure btConnectClick(Sender: TObject);
    procedure btClearClick(Sender: TObject);
    procedure btRunningClick(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure Button3Click(Sender: TObject);
    procedure Button5Click(Sender: TObject);
    procedure Button4Click(Sender: TObject);
    procedure Button6Click(Sender: TObject);
    procedure Button8Click(Sender: TObject);
    procedure Button7Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  frmAplikasi: TfrmAplikasi;
  mydelay   : boolean;
  waktu    : integer;

implementation

{$R *.dfm}


procedure TfrmAplikasi.btExitClick(Sender: TObject);
begin
   frmAplikasi.close;
end;

procedure TfrmAplikasi.btConnectClick(Sender: TObject);
begin
 if MSComm1.PortOpen then
 MSComm1.PortOpen := false;
 MSComm1.CommPort := 3;
 MSComm1.InputLen := 0;
 MSComm1.PortOpen := true;
end;

procedure TfrmAplikasi.btClearClick(Sender: TObject);
begin
mydelay := false;
btClear.Enabled:=false;
btRunning.Enabled:=true;
end;

procedure TfrmAplikasi.btRunningClick(Sender: TObject);
var
buffer : string;
perintah: string;
begin
   mydelay := true;
   btRunning.Enabled:=false;
   btClear.Enabled:=true;
repeat
    application.ProcessMessages;
    buffer := '';
    perintah:='';
    repeat
  	buffer := buffer + MSComm1.Input;
    until (Pos('N', buffer) > 0) or
           (secondsbetween(waktu, now) > 10);
    edit1.text:=buffer;
    if edit1.text<>'' then
    begin
    perintah:=trim(edit1.text);
    if perintah = 'A' then
    shape2.Brush.color:=clred else shape2.brush.color:=clwhite;
    sleep(500);   //data diambil setiap 1 detik
    end;
    if edit1.text<>'' then
    begin
    perintah:=trim(edit1.text);
    if perintah = 'B' then
    shape4.Brush.color:=clred else shape4.brush.color:=clwhite;
    sleep(500);   //data diambil setiap 1 detik
    end;
    if edit1.text<>'' then
    begin
    perintah:=trim(edit1.text);
    if perintah = 'C' then
    shape6.Brush.color:=clred else shape6.brush.color:=clwhite;
    sleep(500);   //data diambil setiap 1 detik
    end;
until mydelay=false;
end;

procedure TfrmAplikasi.Button1Click(Sender: TObject);
begin
  MSComm1.Output := '1';
  Shape1.Brush.Color:=Clred;
end;

procedure TfrmAplikasi.Button2Click(Sender: TObject);
begin
  MSComm1.Output := '2';
  Shape1.Brush.Color:=Clwhite;
end;

procedure TfrmAplikasi.Button3Click(Sender: TObject);
begin
MSComm1.Output := '3';
Shape3.Brush.Color:=Clred;
end;

procedure TfrmAplikasi.Button5Click(Sender: TObject);
begin
MSComm1.Output := '5';
Shape5.Brush.Color:=Clred;
end;

procedure TfrmAplikasi.Button4Click(Sender: TObject);
begin
  MSComm1.Output := '4';
  Shape3.Brush.Color:=Clwhite;
end;

procedure TfrmAplikasi.Button6Click(Sender: TObject);
begin
  MSComm1.Output := '6';
  Shape5.Brush.Color:=Clwhite;
end;

procedure TfrmAplikasi.Button8Click(Sender: TObject);
begin
  MSComm1.Output := '8';
  Shape5.Brush.Color:=Clwhite;
  Shape3.Brush.Color:=Clwhite;
  Shape1.Brush.Color:=Clwhite;
end;

procedure TfrmAplikasi.Button7Click(Sender: TObject);
begin
MSComm1.Output := '7';
Shape5.Brush.Color:=Clred;
Shape3.Brush.Color:=Clred;
Shape1.Brush.Color:=Clred;
end;

end.

