local GUI = Instance.new("ScreenGui")
local Frame = Instance.new("Frame")
local UICorner = Instance.new("UICorner")
local Logo = Instance.new("ImageLabel")
local Epsilon = Instance.new("TextLabel")
local WM = Instance.new("ImageLabel")

GUI.Name = "GUI"
GUI.Parent = game.CoreGui
GUI.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

Logo.Name = "Logo"
Logo.Parent = GUI
Logo.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Logo.BackgroundTransparency = 1.000
Logo.BorderSizePixel = 0
Logo.Position = UDim2.new(0.407000005, 0, -0.287999988, 0)
Logo.Size = UDim2.new(0.186153844, 0, 0.287116557, 0)
Logo.Image = "rbxassetid://7040495366"
Logo.ImageTransparency = 0.030

Epsilon.Name = "Epsilon"
Epsilon.Parent = GUI
Epsilon.Active = true
Epsilon.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Epsilon.BackgroundTransparency = 1.000
Epsilon.Position = UDim2.new(0.0439999998, 0, 1, 0)
Epsilon.Size = UDim2.new(0.157692313, 0, 0.0490797535, 0)
Epsilon.Font = Enum.Font.GothamBold
Epsilon.Text = "                  Powered by Epsilon"
Epsilon.TextColor3 = Color3.fromRGB(255, 255, 255)
Epsilon.TextScaled = false
Epsilon.TextSize = 25.000
Epsilon.TextStrokeColor3 = Color3.fromRGB(140, 31, 186)
Epsilon.TextStrokeTransparency = 0.000
Epsilon.TextWrapped = false

WM.Name = "WM"
WM.Parent = GUI
WM.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
WM.BackgroundTransparency = 1.000
WM.BorderSizePixel = 0
WM.Position = UDim2.new(-0.100000001, 0, 0.916999996, 0)
WM.Size = UDim2.new(0.0530769229, 0, 0.0818638355, 0)
WM.Image = "rbxassetid://7040495366"

Logo.Active = true
Logo.Visible = true
Epsilon.Active = true
Epsilon.Visible = true
WM.Active = true
WM.Visible = true

Logo:TweenPosition(UDim2.new(0.407, 0,0.356, 0), 'InOut', 'Elastic', 2.5, true)
Epsilon:TweenPosition(UDim2.new(-0.001, 0,0.934, 0), 'InOut', 'Quad', 0.4, true)
WM:TweenPosition(UDim2.new(-0.0, 0,0.917, 0), 'InOut', 'Quad', 0.4, true)

wait(3)
Logo:TweenPosition(UDim2.new(0.407, 0,1, 0), 'InOut', 'Quad', 0.4, true)
