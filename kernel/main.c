#include <arch/multiboot.h>
#include <arch/pm.h>
#include <drivers/vga_text.h>
#include <include/kernel.h>

void kernel_main (unsigned long magic, multiboot_info_t* info) {
  set_bg_color (BLACK); 
  set_fg_color (WHITE);

  clear_screen ();

/*  switch_to_pm ();
  write_text_vga ("gdt loaded!\n"); */

  boot_message (); 
  
 /* panic (""); */

  for (;;)
    continue;
}
