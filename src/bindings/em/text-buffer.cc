#include "auto-wrap.h"
#include "text-buffer.h"
#include <emscripten/bind.h>

EMSCRIPTEN_BINDINGS(TextBuffer) {
  emscripten::class_<TextBuffer>("TextBuffer")
    .constructor<>()
    .function("getText", WRAP(&TextBuffer::text))
    .function("getTextInRange", WRAP(&TextBuffer::text_in_range))
    .function("setTextInRange", WRAP(&TextBuffer::set_text_in_range));
}
