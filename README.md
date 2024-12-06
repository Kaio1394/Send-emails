# Email Sender Application

This application is designed for performance testing purposes. It sends emails to an SMTP server (smtp4dev) either individually or in bulk. Additionally, it supports sending emails using threads to simulate concurrent sending for load testing.

## Features

- **Send Individual Emails**: Send a single email to the SMTP server.
- **Send Multiple Emails**: Send multiple emails at once, either with or without threading.
- **Threaded Email Sending**: Use threads to send emails concurrently, useful for performance and load testing scenarios.
- **Customizable Content**: Customize the email subject, body, and recipient list for testing purposes.
- **SMTP Server Support**: Configured to work with an SMTP server, specifically **smtp4dev**, which is an SMTP server for development and testing.

## Usage

### Prerequisites

- **smtp4dev**: Install and run [smtp4dev](https://github.com/rnwood/smtp4dev) or any other local SMTP server for testing.
- **Environment**: The application can be run on any system that supports Qt and the required libraries for email sending.

### Configuration

1. Set up the SMTP server configuration within the application, specifying the host (typically `localhost`) and the port (default is `25`).
2. Customize the email content, including the recipient address and message body.

### Sending Emails

- **Individual Email**: To send a single email, provide the recipient’s address, subject, and body, then click the send button.
  
- **Multiple Emails**: To send multiple emails, provide a list of recipient addresses. The application will handle the sending process.

- **Threaded Sending**: If you want to send multiple emails concurrently, enable threading in the settings. This will create multiple threads, each sending an email independently.

### Example

To send emails using threads:

1. Set the number of threads in the application settings.
2. Enter the recipient list.
3. Configure the email subject and body.
4. Press the "Send" button to initiate email sending.

The application will send emails to the specified SMTP server. The emails can be sent either individually or concurrently, depending on your selected options.

## Performance Testing

The application is designed for **performance testing**. You can simulate high-load scenarios by:

- Sending multiple emails at once.
- Using threading to simulate concurrent email sending.
- Measuring the time it takes to send a certain number of emails.

This is useful for testing the performance of the SMTP server under different conditions, such as high traffic or multiple simultaneous connections.

## Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/Kaio1394/Send-emails

2. Build the application using Qt Creator or your preferred build tool.

3. Configure your SMTP server (smtp4dev or another) for local email sending.

4. Run the application.

<p align="center">
  <img src="https://github.com/user-attachments/assets/674f7e26-edd7-40c8-b34b-185ad2577003" alt="Example Image" />
</p>
