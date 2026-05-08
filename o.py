import tkinter as tk
from tkinter import ttk
import pywinstyles

root = tk.Tk()
root.title("Mica Blur Window")
root.geometry("500x350")

# 1. Set a unique background color (we will make this color transparent)
root.config(bg="#000001") 

# 2. Tell Windows to apply the Mica effect
pywinstyles.apply_style(root, "mica")

# 3. CRITICAL: Make the background color transparent
# This removes the "white" and reveals the blur underneath
root.wm_attributes("-transparentcolor", "#000001")

# 4. Use a Frame for content so your widgets stay visible
# (Don't give the frame the transparent color or it will disappear too!)
main_frame = tk.Frame(root, bg="white", padx=20, pady=20)
main_frame.place(relx=0.5, rely=0.5, anchor="center")

ttk.Label(main_frame, text="Glossy Blur Active!", font=("Segoe UI", 12)).pack()
ttk.Button(main_frame, text="Hello", command=lambda: print("Hello")).pack(pady=10)

root.mainloop()
