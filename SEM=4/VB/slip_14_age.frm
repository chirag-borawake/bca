VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   8565
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   9180
   LinkTopic       =   "Form1"
   ScaleHeight     =   8565
   ScaleWidth      =   9180
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text7 
      Height          =   495
      Left            =   3360
      TabIndex        =   9
      Text            =   " "
      Top             =   4560
      Width           =   1215
   End
   Begin VB.TextBox Text6 
      Height          =   495
      Left            =   3360
      TabIndex        =   8
      Text            =   " "
      Top             =   3600
      Width           =   1215
   End
   Begin VB.TextBox Text5 
      Height          =   495
      Left            =   3360
      TabIndex        =   7
      Text            =   " "
      Top             =   2880
      Width           =   1215
   End
   Begin VB.TextBox Text4 
      Height          =   495
      Left            =   3480
      TabIndex        =   6
      Text            =   " "
      Top             =   2160
      Width           =   1215
   End
   Begin VB.TextBox Text3 
      Height          =   495
      Left            =   3600
      TabIndex        =   5
      Text            =   " "
      Top             =   1560
      Width           =   1215
   End
   Begin VB.TextBox Text2 
      Height          =   495
      Left            =   3600
      TabIndex        =   4
      Text            =   " "
      Top             =   840
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      Height          =   495
      Left            =   3720
      TabIndex        =   3
      Text            =   " "
      Top             =   240
      Width           =   1215
   End
   Begin VB.CommandButton Command3 
      Caption         =   "Command3"
      Height          =   495
      Left            =   5640
      TabIndex        =   2
      Top             =   2400
      Width           =   1215
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Command2"
      Height          =   495
      Left            =   5760
      TabIndex        =   1
      Top             =   1560
      Width           =   1215
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Command1"
      Height          =   495
      Left            =   5640
      TabIndex        =   0
      Top             =   720
      Width           =   1215
   End
   Begin VB.Label Label7 
      Caption         =   "Age in seconds"
      Height          =   495
      Left            =   1200
      TabIndex        =   16
      Top             =   4800
      Width           =   1215
   End
   Begin VB.Label Label6 
      Caption         =   "Age in minutes"
      Height          =   495
      Left            =   1080
      TabIndex        =   15
      Top             =   3960
      Width           =   1215
   End
   Begin VB.Label Label5 
      Caption         =   "Age in hours"
      Height          =   495
      Left            =   1200
      TabIndex        =   14
      Top             =   3000
      Width           =   1215
   End
   Begin VB.Label Label4 
      Caption         =   "Age in days"
      Height          =   495
      Left            =   1200
      TabIndex        =   13
      Top             =   2160
      Width           =   1215
   End
   Begin VB.Label Label3 
      Caption         =   "Age in month"
      Height          =   495
      Left            =   1200
      TabIndex        =   12
      Top             =   1560
      Width           =   1215
   End
   Begin VB.Label Label2 
      Caption         =   "Age in year"
      Height          =   495
      Left            =   1320
      TabIndex        =   11
      Top             =   720
      Width           =   1215
   End
   Begin VB.Label Label1 
      Caption         =   "Enter date of borth"
      Height          =   495
      Left            =   1200
      TabIndex        =   10
      Top             =   120
      Width           =   1215
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False


Private Sub Command3_Click()
    Unload Me
End Sub

Private Sub Command1_Click()
 Text1.Text = ""
    Text2.Text = ""
    Text1.SetFocus
End Sub

Private Sub Command2_Click()

Dim b As Date
    Dim d As Date
    Dim age As Date
    b = Text1.Text
    d = Format$(Now, "dd/mm/yyyy hh:mm:ss ")
    age = Format$(d - b, "dd/mm/yyyy hh:mm:ss")
    
    Text2.Text = Year(age)
    Text3.Text = Month(age)
    Text4.Text = Day(age)
    Text5.Text = Hour(age)
    Text6.Text = Minute(age)
    Text7.Text = Second(age)
End Sub
