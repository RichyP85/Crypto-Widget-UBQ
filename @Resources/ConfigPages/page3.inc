[Variables]
bgH=120
dotY=73
highlightColor=183,234,93,230

; ============================================================
; Address

[addressHeader]
Meter=String
MeterStyle=headerText
X=85
Y=38
Text=UBQ Address
ToolTipText="The UBIQ address you wish to monitor"

[address]
Meter=String
MeterStyle=subText
FontSize=10
X=r
Y=38
W=260
H=18
Text=#Addr#
LeftMouseUpAction=[!CommandMeasure "AddressInput" "ExecuteBatch 1"]
ToolTipText="click to set UBQ Address"


; ============================================================
; Pools

[Pool]
Meter=String
MeterStyle=headerText
X=85
Y=86
Text=Mining Pool
ToolTipText="The Mining Pool you want to monitor"

[HODL]
Meter=String
MeterStyle=subText
X=1r
Y=86
W=71
H=18
Text=HODLPool
FontSize=10
LeftMouseUpAction=!CommandMeasure "AddressInput" "ExecuteBatch 2"

[MaxHash]
Meter=String
MeterStyle=subText
X=80r
Y=86
W=62
H=18
Text=MaxHash
FontSize=10
LeftMouseUpAction=!CommandMeasure "AddressInput" "ExecuteBatch 3"

[UbiqPool]
Meter=String
MeterStyle=subText
X=73r
Y=86
W=64
H=18
Text=UBIQPool
FontSize=10
LeftMouseUpAction=!CommandMeasure "AddressInput" "ExecuteBatch 4"


; ============================================================

