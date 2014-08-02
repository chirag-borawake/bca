VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   4020
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   6615
   LinkTopic       =   "Form1"
   ScaleHeight     =   4020
   ScaleWidth      =   6615
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command3 
      Caption         =   "Exit"
      Height          =   495
      Left            =   4800
      TabIndex        =   2
      Top             =   3120
      Width           =   1215
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Concatenate"
      Height          =   495
      Left            =   2640
      TabIndex        =   1
      Top             =   3120
      Width           =   1215
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Add text"
      Height          =   495
      Left            =   480
      TabIndex        =   0
      Top             =   3120
      Width           =   1275
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
 Dim Txt1, Txt2, Tet3 As TextBox

Private Sub Command1_Click()
Set Txt1 = Controls.Add("vb.textbox", "txt1")
Txt1.Top = 400
Txt1.Width = 2000
Txt1.Left = 500
Txt1.Visible = True

Set Txt2 = Controls.Add("vb.textbox", "txt2")
Txt2.Top = 1000
Txt2.Width = 2000
Txt2.Left = 500
Txt2.Visible = True

End Sub

Private Sub Command2_Click()
Set Txt3 = Controls.Add("vb.textbox", "txt3")
Txt3.Top = 2000
Txt3.Width = 2000
Txt3.Left = 500
Txt3.Visible = True

Txt3.Text = Txt1.Text + Txt2.Text
End Sub

Private Sub Command3_Click()
End
End Sub
