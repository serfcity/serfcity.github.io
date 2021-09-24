namespace window
{
    class Window
    {
	public:
        Window();
		SDL_Window *win;
		char *title;
		bool isOpen();
		void closeWindow();
	private:
		bool quit;
    };
}
