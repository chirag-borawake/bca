VERSION 5.00
Object = "{65E121D4-0C60-11D2-A9FC-0000F8754DA1}#2.0#0"; "MSCHRT20.OCX"
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5535
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   7920
   LinkTopic       =   "Form1"
   ScaleHeight     =   5535
   ScaleWidth      =   7920
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Command1"
      Height          =   495
      Left            =   6840
      TabIndex        =   3
      Top             =   2040
      Width           =   1215
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      Left            =   2160
      TabIndex        =   2
      Text            =   "Combo1"
      Top             =   240
      Width           =   1215
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Check1"
      Height          =   495
      Left            =   5160
      TabIndex        =   1
      Top             =   240
      Width           =   1215
   End
   Begin MSChart20Lib.MSChart MSChart1 
      Height          =   3495
      Left            =   1080
      OleObjectBlob   =   "slip_20_Chart.frx":0000
      TabIndex        =   0
      Top             =   1680
      Width           =   5295
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim X(10) As Variant
Dim A(1 To 7, 1 To 5) As Variant
Dim i, n, max As Integer
Private Sub Check1_Click()
If Check1.Value = 1 Then
MSChart1.ShowLegend = True
Check1.Caption = "&Hide legend"
Else
MSChart1.ShowLegend = False
Check1.Caption = "&Show legend"
End If
End Sub

Private Sub cmdExit_Click()
End
End Sub

Private Sub combo1_click()
MSChart1.ChartData = A
MSChart1.chartType = Combo1.ListIndex
End Sub

Private Sub Command1_Click()
n = InputBox("Enter how many elements")
For i = 0 To n - 1 Step 1
X(i) = Val(InputBox("Enter the no of value " & i + 1))
Next i
max = X(0)
For i = 0 To n - 1
If max < X(i) Then
max = X(i)
End If
Next i
MSChart1.Visible = True
MSChart1.ChartData = X
End Sub

Private Sub form_load()
With Combo1
    .AddItem "3D Bar"
    .AddItem "2D Bar"
    .AddItem "3D line"
    .AddItem "3D Area"
    .AddItem "2D step"
    .AddItem "3D Combination"
    .AddItem "2D Combination"
End With
Check1.Caption = "&Show legend"
A(1, 2) = "Steel"
A(1, 3) = "Aluminium"
A(1, 4) = "copper"
A(1, 5) = "Lead"

A(2, 1) = "Jan"
A(2, 2) = 67
A(2, 3) = 35
A(2, 4) = 45

A(3, 1) = "Feb"
A(3, 2) = 67
A(3, 3) = 76
A(3, 4) = 56

A(4, 1) = "Mar"
A(4, 2) = 78
A(4, 3) = 56
A(4, 4) = 76

A(5, 1) = "Apr"
A(5, 2) = 67
A(5, 3) = 45
A(5, 4) = 65

A(6, 1) = "May"
A(6, 2) = 23
A(6, 3) = 65
A(6, 4) = 47

A(7, 1) = "Jun"
A(7, 2) = 76
A(7, 3) = 41
A(7, 4) = 34
End Sub

