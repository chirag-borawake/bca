VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   6285
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   7800
   LinkTopic       =   "Form1"
   ScaleHeight     =   6285
   ScaleWidth      =   7800
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Command1"
      Height          =   495
      Left            =   6000
      TabIndex        =   15
      Top             =   2640
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      Height          =   735
      HideSelection   =   0   'False
      Left            =   480
      MultiLine       =   -1  'True
      TabIndex        =   14
      Top             =   360
      Width           =   7095
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Bold"
      Height          =   495
      Index           =   0
      Left            =   3840
      TabIndex        =   9
      Top             =   2400
      Width           =   1215
   End
   Begin VB.CommandButton Command6 
      Caption         =   "Exit"
      Height          =   495
      Left            =   4440
      TabIndex        =   8
      Top             =   5160
      Width           =   1215
   End
   Begin VB.CommandButton Command5 
      Caption         =   "Command5"
      Height          =   495
      Left            =   2880
      TabIndex        =   7
      Top             =   5280
      Width           =   1215
   End
   Begin VB.CommandButton Command4 
      Caption         =   "Command4"
      Height          =   495
      Left            =   1200
      Style           =   1  'Graphical
      TabIndex        =   6
      Top             =   5160
      Width           =   1215
   End
   Begin VB.CommandButton cmdReplace 
      Caption         =   "Replace"
      Height          =   495
      Left            =   4320
      TabIndex        =   5
      Top             =   4440
      Width           =   1215
   End
   Begin VB.CommandButton cmdFindNext 
      Caption         =   "Find Next"
      Height          =   495
      Left            =   2880
      TabIndex        =   4
      Top             =   4440
      Width           =   1215
   End
   Begin VB.CommandButton cmdFind 
      Caption         =   "Find"
      Height          =   495
      Left            =   1200
      TabIndex        =   3
      Top             =   4320
      Width           =   1215
   End
   Begin VB.OptionButton Option1 
      Caption         =   "Arial"
      Height          =   495
      Index           =   0
      Left            =   1320
      TabIndex        =   2
      Top             =   2400
      Width           =   1215
   End
   Begin VB.Frame Frame2 
      Caption         =   "Style"
      Height          =   2175
      Left            =   3600
      TabIndex        =   1
      Top             =   2040
      Width           =   1695
      Begin VB.CheckBox Check1 
         Caption         =   "Underline"
         Height          =   495
         Index           =   2
         Left            =   240
         TabIndex        =   11
         Top             =   1560
         Width           =   1215
      End
      Begin VB.CheckBox Check1 
         Caption         =   "Italic"
         Height          =   495
         Index           =   1
         Left            =   240
         TabIndex        =   10
         Top             =   960
         Width           =   1215
      End
   End
   Begin VB.Frame Frame1 
      Caption         =   "Font"
      Height          =   2295
      Left            =   1080
      TabIndex        =   0
      Top             =   1920
      Width           =   1695
      Begin VB.OptionButton Option1 
         Caption         =   "Times New Roman"
         Height          =   495
         Index           =   2
         Left            =   240
         TabIndex        =   13
         Top             =   1560
         Width           =   1215
      End
      Begin VB.OptionButton Option1 
         Caption         =   "Arial Black"
         Height          =   495
         Index           =   1
         Left            =   240
         TabIndex        =   12
         Top             =   1080
         Width           =   1215
      End
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim txt As String
Dim s, l, r As Integer
Private Sub Check1_Click(Index As Integer)
    If Check1(0).Value = 1 Then
        Text1.Font.Bold = True
    Else
        Text1.Font.Bold = False
    End If
    If Check1(1).Value = 1 Then
        Text1.Font.Italic = True
    Else
        Text1.Font.Italic = False
    End If
    If Check1(2).Value = 1 Then
        Text1.Font.Underline = True
    Else
        Text1.Font.Underline = False
    End If
End Sub

Private Sub cmdExit_Click()
Unload Me
End Sub

Private Sub cmdFind_Click()
txt = InputBox("enter Text to find")
l = Len(txt)
r = InStr(1, Text1.Text, txt, vbTextCompare)
Text1.SelStart = r - 1
Text1.SelLength = l
End Sub

Private Sub cmdFindNext_Click()
If r <> Len(Text1.Text) Then
    r = InStr(r + 1, Text1.Text, txt, vbTextCompare)
    Text1.SelStart = r - 1
    Text1.SelLength = l
Else
    MsgBox "No more Text", vbInformation, "Find"
End If
End Sub

Private Sub cmdReplace_Click()
txt1 = InputBox("Enter text to replace")
Text1.Text = Replace(Text1.Text, txt, txt1)
End Sub

Private Sub Command1_Click()
txt = InputBox("Enter")
l = Len(txt)
r = InStr(1, Text1.Text, txt, vbTextCompare)
Text1.SelStart = r - 1
Text1.SelLength = l
End Sub

Private Sub Command6_Click()
End
End Sub

Private Sub Form_Load()
Option1(0).Value = False
Option1(1).Value = False
Option1(2).Value = False
Text1.Text = "Design an application in VB to implement the find and replace dialogue " & _
            "box for textbox control with multiple line of text with 3 option buttons and check boxes and"
End Sub

Private Sub Option1_Click(Index As Integer)
If Option1(0).Value = True Then
    Text1.Font.Name = "Arial"
ElseIf Option1(1).Value = True Then
    Text1.Font.Name = "Arial Black"
ElseIf Option1(2).Value = True Then
    Text1.Font.Name = "Times New Roman"
Else
End If
End Sub


