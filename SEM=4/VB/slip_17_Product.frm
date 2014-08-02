VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5145
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   4155
   LinkTopic       =   "Form1"
   ScaleHeight     =   5145
   ScaleWidth      =   4155
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text1 
      Height          =   495
      Left            =   2160
      TabIndex        =   8
      Text            =   " "
      Top             =   240
      Width           =   1215
   End
   Begin VB.CommandButton cmdQuit 
      Caption         =   "Quit"
      Height          =   495
      Left            =   2400
      TabIndex        =   7
      Top             =   4200
      Width           =   1215
   End
   Begin VB.CommandButton cmdContinue 
      Caption         =   "Continue"
      Height          =   495
      Left            =   840
      TabIndex        =   6
      Top             =   4200
      Width           =   1215
   End
   Begin VB.OptionButton optBad 
      Caption         =   "Bad"
      Height          =   195
      Left            =   1440
      TabIndex        =   5
      Top             =   3240
      Width           =   1215
   End
   Begin VB.OptionButton optAverage 
      Caption         =   "Average"
      Height          =   195
      Left            =   1440
      TabIndex        =   4
      Top             =   2640
      Width           =   1215
   End
   Begin VB.OptionButton optSatisfactory 
      Caption         =   "Satisfactory"
      Height          =   195
      Left            =   1440
      TabIndex        =   3
      Top             =   2040
      Width           =   1215
   End
   Begin VB.OptionButton optExcellent 
      Caption         =   "Excellent"
      Height          =   195
      Left            =   1440
      TabIndex        =   2
      Top             =   1440
      Width           =   1215
   End
   Begin VB.Frame Frame1 
      Caption         =   "Options"
      Height          =   2535
      Left            =   1200
      TabIndex        =   1
      Top             =   1080
      Width           =   1935
   End
   Begin VB.Label Label1 
      Caption         =   "Enter name"
      Height          =   255
      Left            =   600
      TabIndex        =   0
      Top             =   360
      Width           =   975
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim Excellent As Integer
Dim Satisfactory As Integer
Dim Average As Integer
Dim Bad As Integer
Dim Total As Integer

Private Sub cmdContinue_Click()
If optExcellent.Value Then
    Excellent = Excellent + 1
ElseIf optSatisfactory.Value Then
    Satisfactory = Satisfactory + 1
ElseIf optAverage.Value Then
    Average = Average + 1
Else
    Bad = Bad + 1
End If
Text1.Text = ""
Text1.SetFocus
optExcellent.Value = False
optSatisfactory.Value = False
optAverage.Value = False
optBad.Value = False
End Sub

Private Sub cmdQuit_Click()
Total = Excellent + Satisfactory + Average + Bad
With frmServeyResult
    .lblE = Excellent
    .lblS = Satisfactory
    .lblA = Average
    .lblB = Bad
    .lblEPer = Format((Excellent / Total) * 100, "#0.00")
    .lblSPer = Format((Satisfactory / Total) * 100, "#0.00")
    .lblAPer = Format((Average / Total) * 100, "#0.00")
    .lblBPer = Format((Bad / Total) * 100, "#0.00")
End With
frmServeyResult.Show
Unload Me
End Sub
Private Sub cmdOK_Click()
End
End Sub

Private Sub Form_Load()
Text1.Text = ""
optExcellent.Value = False
optSatisfactory.Value = False
optAverage.Value = False
optBad.Value = False
End Sub
