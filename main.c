#include "conge/conge.h"

// clang-format off

void
tick (conge_ctx* ctx)
{
  if (ctx->keys[CONGE_ESC])
    ctx->exit = 1;
}

int
main ()
{
  conge_ctx* ctx = conge_init ();
  conge_run (ctx, tick, 30);
  conge_free (ctx);

  return 0;
}

// clang-format on
