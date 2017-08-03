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
	//TODO: find a way to keep track of each name's corresponding PIN so we can remove it when the PIN is entered.
	queueTitle->Text = "Currently in the queue:";
	if (firstName->Text == "") {
		firstName->Text = nameInput->Text;
	}
	else {
		if (secName->Text == "") {
			secName->Text = nameInput->Text;
		}
		else {
			if (thirdName->Text == "") {
				thirdName->Text = nameInput->Text;
			}
			else {
				if (fourthName->Text == "") {
					fourthName->Text = nameInput->Text;
				}
				else {
					if (fifthName->Text == "") {
						fifthName->Text = nameInput->Text;
					}
					else {
						entryReceived->Text = "The queue has over 5 people, sorry.";
						//let the user know it's not an error, the queue is just full
					}
				}
			}
		}
	}
	//Take user info out of the text boxes so it doesn't hang around
	nameInput->Text = "";
	emailInput->Text = "";
	pinInput->Text = "";
}

/*void WorQUWP::MainPage::Button_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (firstName->Text == "") {
		firstName->Text = nameInput->Text;
	}
	else {
		if (secName->Text == "") {
			secName->Text = nameInput->Text;
		}
		else {
			if (thirdName->Text == "") {
				thirdName->Text = nameInput->Text;
			}
			else {
				if (fourthName->Text == "") {
					fourthName->Text = nameInput->Text;
				}
				else {
					if (fifthName->Text == "") {
						fifthName->Text = nameInput->Text;
					}
					else {
						entryReceived->Text = "The queue has over 5 people, sorry.";
						//let the user know it's not an error, the queue is just full
					}
				}
			}
		}
	}
	nameInput->Text = "";
	emailInput->Text = "";
	pinInput->Text = "";
}*/


void WorQUWP::MainPage::SignOutClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//do nothing, yet
	//TODO: store the PIN for each name (but don't display it!) so that they can sign out by entering their PIN.
	//Clear the queueTitle so it's not cluttering the display
	if (firstName->Text == "") {
		queueTitle->Text = "";
	}
}


/*void WorQUWP::MainPage::SignOutTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	//do nothing, yet
}*/
