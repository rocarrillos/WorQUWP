//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace WorQUWP;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
}
void WorQUWP::MainPage::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//TODO: make a decision tree to add nameInput to the last available spot
	//TODO: find a way to keep track of each name's corresponding PIN so we can remove it when the PIN is entered.
	firstName->Text = nameInput->Text;
	entryReceived->Text = "You have been added to the workstation queue.";
	//Let the user know that they have been successfully added
	//And take their info out of the text boxes so it doesn't hang around
	nameInput->Text = "";
	emailInput->Text = "";
	pinInput->Text = "";
}

void WorQUWP::MainPage::Button_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	entryReceived->Text = "You have been added to the workstation queue.";
	nameInput->Text = "";
	emailInput->Text = "";
	pinInput->Text = "";
}


void WorQUWP::MainPage::SignOutClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//do nothing, yet
}


void WorQUWP::MainPage::SignOutTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	//do nothing, yet
}
