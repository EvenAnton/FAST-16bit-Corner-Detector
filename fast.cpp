// #include <stdlib.h>
#include "fast.hpp"

typedef struct
{
    int x, y;
} xy;


int fast9_corner_score(const uint16_t* p, const int pixel[], int bstart, int bmax)
{    
    int bmin = bstart;
    int b = (bmax + bmin)/2;
    
    /*Compute the score using binary search*/
	for(;;)
    {
		int cb = *p + b;
		int c_b= *p - b;

    // Generated code
    {
        if( p[pixel[0]] > cb)
         if( p[pixel[1]] > cb)
          if( p[pixel[2]] > cb)
           if( p[pixel[3]] > cb)
            if( p[pixel[4]] > cb)
             if( p[pixel[5]] > cb)
              if( p[pixel[6]] > cb)
               if( p[pixel[7]] > cb)
                if( p[pixel[8]] > cb)
                 goto is_a_corner;
                else
                 if( p[pixel[15]] > cb)
                  goto is_a_corner;
                 else
                  goto is_not_a_corner;
               else if( p[pixel[7]] < c_b)
                if( p[pixel[14]] > cb)
                 if( p[pixel[15]] > cb)
                  goto is_a_corner;
                 else
                  goto is_not_a_corner;
                else if( p[pixel[14]] < c_b)
                 if( p[pixel[8]] < c_b)
                  if( p[pixel[9]] < c_b)
                   if( p[pixel[10]] < c_b)
                    if( p[pixel[11]] < c_b)
                     if( p[pixel[12]] < c_b)
                      if( p[pixel[13]] < c_b)
                       if( p[pixel[15]] < c_b)
                        goto is_a_corner;
                       else
                        goto is_not_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                if( p[pixel[14]] > cb)
                 if( p[pixel[15]] > cb)
                  goto is_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else if( p[pixel[6]] < c_b)
               if( p[pixel[15]] > cb)
                if( p[pixel[13]] > cb)
                 if( p[pixel[14]] > cb)
                  goto is_a_corner;
                 else
                  goto is_not_a_corner;
                else if( p[pixel[13]] < c_b)
                 if( p[pixel[7]] < c_b)
                  if( p[pixel[8]] < c_b)
                   if( p[pixel[9]] < c_b)
                    if( p[pixel[10]] < c_b)
                     if( p[pixel[11]] < c_b)
                      if( p[pixel[12]] < c_b)
                       if( p[pixel[14]] < c_b)
                        goto is_a_corner;
                       else
                        goto is_not_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                if( p[pixel[7]] < c_b)
                 if( p[pixel[8]] < c_b)
                  if( p[pixel[9]] < c_b)
                   if( p[pixel[10]] < c_b)
                    if( p[pixel[11]] < c_b)
                     if( p[pixel[12]] < c_b)
                      if( p[pixel[13]] < c_b)
                       if( p[pixel[14]] < c_b)
                        goto is_a_corner;
                       else
                        goto is_not_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               if( p[pixel[13]] > cb)
                if( p[pixel[14]] > cb)
                 if( p[pixel[15]] > cb)
                  goto is_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else if( p[pixel[13]] < c_b)
                if( p[pixel[7]] < c_b)
                 if( p[pixel[8]] < c_b)
                  if( p[pixel[9]] < c_b)
                   if( p[pixel[10]] < c_b)
                    if( p[pixel[11]] < c_b)
                     if( p[pixel[12]] < c_b)
                      if( p[pixel[14]] < c_b)
                       if( p[pixel[15]] < c_b)
                        goto is_a_corner;
                       else
                        goto is_not_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else if( p[pixel[5]] < c_b)
              if( p[pixel[14]] > cb)
               if( p[pixel[12]] > cb)
                if( p[pixel[13]] > cb)
                 if( p[pixel[15]] > cb)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     if( p[pixel[9]] > cb)
                      if( p[pixel[10]] > cb)
                       if( p[pixel[11]] > cb)
                        goto is_a_corner;
                       else
                        goto is_not_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else if( p[pixel[12]] < c_b)
                if( p[pixel[6]] < c_b)
                 if( p[pixel[7]] < c_b)
                  if( p[pixel[8]] < c_b)
                   if( p[pixel[9]] < c_b)
                    if( p[pixel[10]] < c_b)
                     if( p[pixel[11]] < c_b)
                      if( p[pixel[13]] < c_b)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else if( p[pixel[14]] < c_b)
               if( p[pixel[7]] < c_b)
                if( p[pixel[8]] < c_b)
                 if( p[pixel[9]] < c_b)
                  if( p[pixel[10]] < c_b)
                   if( p[pixel[11]] < c_b)
                    if( p[pixel[12]] < c_b)
                     if( p[pixel[13]] < c_b)
                      if( p[pixel[6]] < c_b)
                       goto is_a_corner;
                      else
                       if( p[pixel[15]] < c_b)
                        goto is_a_corner;
                       else
                        goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               if( p[pixel[6]] < c_b)
                if( p[pixel[7]] < c_b)
                 if( p[pixel[8]] < c_b)
                  if( p[pixel[9]] < c_b)
                   if( p[pixel[10]] < c_b)
                    if( p[pixel[11]] < c_b)
                     if( p[pixel[12]] < c_b)
                      if( p[pixel[13]] < c_b)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else
              if( p[pixel[12]] > cb)
               if( p[pixel[13]] > cb)
                if( p[pixel[14]] > cb)
                 if( p[pixel[15]] > cb)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     if( p[pixel[9]] > cb)
                      if( p[pixel[10]] > cb)
                       if( p[pixel[11]] > cb)
                        goto is_a_corner;
                       else
                        goto is_not_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else if( p[pixel[12]] < c_b)
               if( p[pixel[7]] < c_b)
                if( p[pixel[8]] < c_b)
                 if( p[pixel[9]] < c_b)
                  if( p[pixel[10]] < c_b)
                   if( p[pixel[11]] < c_b)
                    if( p[pixel[13]] < c_b)
                     if( p[pixel[14]] < c_b)
                      if( p[pixel[6]] < c_b)
                       goto is_a_corner;
                      else
                       if( p[pixel[15]] < c_b)
                        goto is_a_corner;
                       else
                        goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
            else if( p[pixel[4]] < c_b)
             if( p[pixel[13]] > cb)
              if( p[pixel[11]] > cb)
               if( p[pixel[12]] > cb)
                if( p[pixel[14]] > cb)
                 if( p[pixel[15]] > cb)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     if( p[pixel[9]] > cb)
                      if( p[pixel[10]] > cb)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     if( p[pixel[9]] > cb)
                      if( p[pixel[10]] > cb)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else if( p[pixel[11]] < c_b)
               if( p[pixel[5]] < c_b)
                if( p[pixel[6]] < c_b)
                 if( p[pixel[7]] < c_b)
                  if( p[pixel[8]] < c_b)
                   if( p[pixel[9]] < c_b)
                    if( p[pixel[10]] < c_b)
                     if( p[pixel[12]] < c_b)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else if( p[pixel[13]] < c_b)
              if( p[pixel[7]] < c_b)
               if( p[pixel[8]] < c_b)
                if( p[pixel[9]] < c_b)
                 if( p[pixel[10]] < c_b)
                  if( p[pixel[11]] < c_b)
                   if( p[pixel[12]] < c_b)
                    if( p[pixel[6]] < c_b)
                     if( p[pixel[5]] < c_b)
                      goto is_a_corner;
                     else
                      if( p[pixel[14]] < c_b)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                    else
                     if( p[pixel[14]] < c_b)
                      if( p[pixel[15]] < c_b)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              if( p[pixel[5]] < c_b)
               if( p[pixel[6]] < c_b)
                if( p[pixel[7]] < c_b)
                 if( p[pixel[8]] < c_b)
                  if( p[pixel[9]] < c_b)
                   if( p[pixel[10]] < c_b)
                    if( p[pixel[11]] < c_b)
                     if( p[pixel[12]] < c_b)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
            else
             if( p[pixel[11]] > cb)
              if( p[pixel[12]] > cb)
               if( p[pixel[13]] > cb)
                if( p[pixel[14]] > cb)
                 if( p[pixel[15]] > cb)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     if( p[pixel[9]] > cb)
                      if( p[pixel[10]] > cb)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     if( p[pixel[9]] > cb)
                      if( p[pixel[10]] > cb)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else if( p[pixel[11]] < c_b)
              if( p[pixel[7]] < c_b)
               if( p[pixel[8]] < c_b)
                if( p[pixel[9]] < c_b)
                 if( p[pixel[10]] < c_b)
                  if( p[pixel[12]] < c_b)
                   if( p[pixel[13]] < c_b)
                    if( p[pixel[6]] < c_b)
                     if( p[pixel[5]] < c_b)
                      goto is_a_corner;
                     else
                      if( p[pixel[14]] < c_b)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                    else
                     if( p[pixel[14]] < c_b)
                      if( p[pixel[15]] < c_b)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              goto is_not_a_corner;
           else if( p[pixel[3]] < c_b)
            if( p[pixel[10]] > cb)
             if( p[pixel[11]] > cb)
              if( p[pixel[12]] > cb)
               if( p[pixel[13]] > cb)
                if( p[pixel[14]] > cb)
                 if( p[pixel[15]] > cb)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     if( p[pixel[9]] > cb)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     if( p[pixel[9]] > cb)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[4]] > cb)
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     if( p[pixel[9]] > cb)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else if( p[pixel[10]] < c_b)
             if( p[pixel[7]] < c_b)
              if( p[pixel[8]] < c_b)
               if( p[pixel[9]] < c_b)
                if( p[pixel[11]] < c_b)
                 if( p[pixel[6]] < c_b)
                  if( p[pixel[5]] < c_b)
                   if( p[pixel[4]] < c_b)
                    goto is_a_corner;
                   else
                    if( p[pixel[12]] < c_b)
                     if( p[pixel[13]] < c_b)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                  else
                   if( p[pixel[12]] < c_b)
                    if( p[pixel[13]] < c_b)
                     if( p[pixel[14]] < c_b)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                 else
                  if( p[pixel[12]] < c_b)
                   if( p[pixel[13]] < c_b)
                    if( p[pixel[14]] < c_b)
                     if( p[pixel[15]] < c_b)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else
            if( p[pixel[10]] > cb)
             if( p[pixel[11]] > cb)
              if( p[pixel[12]] > cb)
               if( p[pixel[13]] > cb)
                if( p[pixel[14]] > cb)
                 if( p[pixel[15]] > cb)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     if( p[pixel[9]] > cb)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     if( p[pixel[9]] > cb)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[4]] > cb)
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     if( p[pixel[9]] > cb)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else if( p[pixel[10]] < c_b)
             if( p[pixel[7]] < c_b)
              if( p[pixel[8]] < c_b)
               if( p[pixel[9]] < c_b)
                if( p[pixel[11]] < c_b)
                 if( p[pixel[12]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[5]] < c_b)
                    if( p[pixel[4]] < c_b)
                     goto is_a_corner;
                    else
                     if( p[pixel[13]] < c_b)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                   else
                    if( p[pixel[13]] < c_b)
                     if( p[pixel[14]] < c_b)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                  else
                   if( p[pixel[13]] < c_b)
                    if( p[pixel[14]] < c_b)
                     if( p[pixel[15]] < c_b)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else
             goto is_not_a_corner;
          else if( p[pixel[2]] < c_b)
           if( p[pixel[9]] > cb)
            if( p[pixel[10]] > cb)
             if( p[pixel[11]] > cb)
              if( p[pixel[12]] > cb)
               if( p[pixel[13]] > cb)
                if( p[pixel[14]] > cb)
                 if( p[pixel[15]] > cb)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[4]] > cb)
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               if( p[pixel[3]] > cb)
                if( p[pixel[4]] > cb)
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else if( p[pixel[9]] < c_b)
            if( p[pixel[7]] < c_b)
             if( p[pixel[8]] < c_b)
              if( p[pixel[10]] < c_b)
               if( p[pixel[6]] < c_b)
                if( p[pixel[5]] < c_b)
                 if( p[pixel[4]] < c_b)
                  if( p[pixel[3]] < c_b)
                   goto is_a_corner;
                  else
                   if( p[pixel[11]] < c_b)
                    if( p[pixel[12]] < c_b)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                 else
                  if( p[pixel[11]] < c_b)
                   if( p[pixel[12]] < c_b)
                    if( p[pixel[13]] < c_b)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[11]] < c_b)
                  if( p[pixel[12]] < c_b)
                   if( p[pixel[13]] < c_b)
                    if( p[pixel[14]] < c_b)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[11]] < c_b)
                 if( p[pixel[12]] < c_b)
                  if( p[pixel[13]] < c_b)
                   if( p[pixel[14]] < c_b)
                    if( p[pixel[15]] < c_b)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else
            goto is_not_a_corner;
          else
           if( p[pixel[9]] > cb)
            if( p[pixel[10]] > cb)
             if( p[pixel[11]] > cb)
              if( p[pixel[12]] > cb)
               if( p[pixel[13]] > cb)
                if( p[pixel[14]] > cb)
                 if( p[pixel[15]] > cb)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[4]] > cb)
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               if( p[pixel[3]] > cb)
                if( p[pixel[4]] > cb)
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    if( p[pixel[8]] > cb)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else if( p[pixel[9]] < c_b)
            if( p[pixel[7]] < c_b)
             if( p[pixel[8]] < c_b)
              if( p[pixel[10]] < c_b)
               if( p[pixel[11]] < c_b)
                if( p[pixel[6]] < c_b)
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[4]] < c_b)
                   if( p[pixel[3]] < c_b)
                    goto is_a_corner;
                   else
                    if( p[pixel[12]] < c_b)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                  else
                   if( p[pixel[12]] < c_b)
                    if( p[pixel[13]] < c_b)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                 else
                  if( p[pixel[12]] < c_b)
                   if( p[pixel[13]] < c_b)
                    if( p[pixel[14]] < c_b)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[12]] < c_b)
                  if( p[pixel[13]] < c_b)
                   if( p[pixel[14]] < c_b)
                    if( p[pixel[15]] < c_b)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else
            goto is_not_a_corner;
         else if( p[pixel[1]] < c_b)
          if( p[pixel[8]] > cb)
           if( p[pixel[9]] > cb)
            if( p[pixel[10]] > cb)
             if( p[pixel[11]] > cb)
              if( p[pixel[12]] > cb)
               if( p[pixel[13]] > cb)
                if( p[pixel[14]] > cb)
                 if( p[pixel[15]] > cb)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[4]] > cb)
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               if( p[pixel[3]] > cb)
                if( p[pixel[4]] > cb)
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else
              if( p[pixel[2]] > cb)
               if( p[pixel[3]] > cb)
                if( p[pixel[4]] > cb)
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else
            goto is_not_a_corner;
          else if( p[pixel[8]] < c_b)
           if( p[pixel[7]] < c_b)
            if( p[pixel[9]] < c_b)
             if( p[pixel[6]] < c_b)
              if( p[pixel[5]] < c_b)
               if( p[pixel[4]] < c_b)
                if( p[pixel[3]] < c_b)
                 if( p[pixel[2]] < c_b)
                  goto is_a_corner;
                 else
                  if( p[pixel[10]] < c_b)
                   if( p[pixel[11]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[10]] < c_b)
                  if( p[pixel[11]] < c_b)
                   if( p[pixel[12]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[10]] < c_b)
                 if( p[pixel[11]] < c_b)
                  if( p[pixel[12]] < c_b)
                   if( p[pixel[13]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               if( p[pixel[10]] < c_b)
                if( p[pixel[11]] < c_b)
                 if( p[pixel[12]] < c_b)
                  if( p[pixel[13]] < c_b)
                   if( p[pixel[14]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else
              if( p[pixel[10]] < c_b)
               if( p[pixel[11]] < c_b)
                if( p[pixel[12]] < c_b)
                 if( p[pixel[13]] < c_b)
                  if( p[pixel[14]] < c_b)
                   if( p[pixel[15]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else
            goto is_not_a_corner;
          else
           goto is_not_a_corner;
         else
          if( p[pixel[8]] > cb)
           if( p[pixel[9]] > cb)
            if( p[pixel[10]] > cb)
             if( p[pixel[11]] > cb)
              if( p[pixel[12]] > cb)
               if( p[pixel[13]] > cb)
                if( p[pixel[14]] > cb)
                 if( p[pixel[15]] > cb)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[4]] > cb)
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               if( p[pixel[3]] > cb)
                if( p[pixel[4]] > cb)
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else
              if( p[pixel[2]] > cb)
               if( p[pixel[3]] > cb)
                if( p[pixel[4]] > cb)
                 if( p[pixel[5]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[7]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else
            goto is_not_a_corner;
          else if( p[pixel[8]] < c_b)
           if( p[pixel[7]] < c_b)
            if( p[pixel[9]] < c_b)
             if( p[pixel[10]] < c_b)
              if( p[pixel[6]] < c_b)
               if( p[pixel[5]] < c_b)
                if( p[pixel[4]] < c_b)
                 if( p[pixel[3]] < c_b)
                  if( p[pixel[2]] < c_b)
                   goto is_a_corner;
                  else
                   if( p[pixel[11]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                 else
                  if( p[pixel[11]] < c_b)
                   if( p[pixel[12]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[11]] < c_b)
                  if( p[pixel[12]] < c_b)
                   if( p[pixel[13]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[11]] < c_b)
                 if( p[pixel[12]] < c_b)
                  if( p[pixel[13]] < c_b)
                   if( p[pixel[14]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               if( p[pixel[11]] < c_b)
                if( p[pixel[12]] < c_b)
                 if( p[pixel[13]] < c_b)
                  if( p[pixel[14]] < c_b)
                   if( p[pixel[15]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else
            goto is_not_a_corner;
          else
           goto is_not_a_corner;
        else if( p[pixel[0]] < c_b)
         if( p[pixel[1]] > cb)
          if( p[pixel[8]] > cb)
           if( p[pixel[7]] > cb)
            if( p[pixel[9]] > cb)
             if( p[pixel[6]] > cb)
              if( p[pixel[5]] > cb)
               if( p[pixel[4]] > cb)
                if( p[pixel[3]] > cb)
                 if( p[pixel[2]] > cb)
                  goto is_a_corner;
                 else
                  if( p[pixel[10]] > cb)
                   if( p[pixel[11]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[10]] > cb)
                  if( p[pixel[11]] > cb)
                   if( p[pixel[12]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[10]] > cb)
                 if( p[pixel[11]] > cb)
                  if( p[pixel[12]] > cb)
                   if( p[pixel[13]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               if( p[pixel[10]] > cb)
                if( p[pixel[11]] > cb)
                 if( p[pixel[12]] > cb)
                  if( p[pixel[13]] > cb)
                   if( p[pixel[14]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else
              if( p[pixel[10]] > cb)
               if( p[pixel[11]] > cb)
                if( p[pixel[12]] > cb)
                 if( p[pixel[13]] > cb)
                  if( p[pixel[14]] > cb)
                   if( p[pixel[15]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else
            goto is_not_a_corner;
          else if( p[pixel[8]] < c_b)
           if( p[pixel[9]] < c_b)
            if( p[pixel[10]] < c_b)
             if( p[pixel[11]] < c_b)
              if( p[pixel[12]] < c_b)
               if( p[pixel[13]] < c_b)
                if( p[pixel[14]] < c_b)
                 if( p[pixel[15]] < c_b)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[4]] < c_b)
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               if( p[pixel[3]] < c_b)
                if( p[pixel[4]] < c_b)
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else
              if( p[pixel[2]] < c_b)
               if( p[pixel[3]] < c_b)
                if( p[pixel[4]] < c_b)
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else
            goto is_not_a_corner;
          else
           goto is_not_a_corner;
         else if( p[pixel[1]] < c_b)
          if( p[pixel[2]] > cb)
           if( p[pixel[9]] > cb)
            if( p[pixel[7]] > cb)
             if( p[pixel[8]] > cb)
              if( p[pixel[10]] > cb)
               if( p[pixel[6]] > cb)
                if( p[pixel[5]] > cb)
                 if( p[pixel[4]] > cb)
                  if( p[pixel[3]] > cb)
                   goto is_a_corner;
                  else
                   if( p[pixel[11]] > cb)
                    if( p[pixel[12]] > cb)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                 else
                  if( p[pixel[11]] > cb)
                   if( p[pixel[12]] > cb)
                    if( p[pixel[13]] > cb)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[11]] > cb)
                  if( p[pixel[12]] > cb)
                   if( p[pixel[13]] > cb)
                    if( p[pixel[14]] > cb)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[11]] > cb)
                 if( p[pixel[12]] > cb)
                  if( p[pixel[13]] > cb)
                   if( p[pixel[14]] > cb)
                    if( p[pixel[15]] > cb)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else if( p[pixel[9]] < c_b)
            if( p[pixel[10]] < c_b)
             if( p[pixel[11]] < c_b)
              if( p[pixel[12]] < c_b)
               if( p[pixel[13]] < c_b)
                if( p[pixel[14]] < c_b)
                 if( p[pixel[15]] < c_b)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[4]] < c_b)
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               if( p[pixel[3]] < c_b)
                if( p[pixel[4]] < c_b)
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else
            goto is_not_a_corner;
          else if( p[pixel[2]] < c_b)
           if( p[pixel[3]] > cb)
            if( p[pixel[10]] > cb)
             if( p[pixel[7]] > cb)
              if( p[pixel[8]] > cb)
               if( p[pixel[9]] > cb)
                if( p[pixel[11]] > cb)
                 if( p[pixel[6]] > cb)
                  if( p[pixel[5]] > cb)
                   if( p[pixel[4]] > cb)
                    goto is_a_corner;
                   else
                    if( p[pixel[12]] > cb)
                     if( p[pixel[13]] > cb)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                  else
                   if( p[pixel[12]] > cb)
                    if( p[pixel[13]] > cb)
                     if( p[pixel[14]] > cb)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                 else
                  if( p[pixel[12]] > cb)
                   if( p[pixel[13]] > cb)
                    if( p[pixel[14]] > cb)
                     if( p[pixel[15]] > cb)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else if( p[pixel[10]] < c_b)
             if( p[pixel[11]] < c_b)
              if( p[pixel[12]] < c_b)
               if( p[pixel[13]] < c_b)
                if( p[pixel[14]] < c_b)
                 if( p[pixel[15]] < c_b)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     if( p[pixel[9]] < c_b)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     if( p[pixel[9]] < c_b)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[4]] < c_b)
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     if( p[pixel[9]] < c_b)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else if( p[pixel[3]] < c_b)
            if( p[pixel[4]] > cb)
             if( p[pixel[13]] > cb)
              if( p[pixel[7]] > cb)
               if( p[pixel[8]] > cb)
                if( p[pixel[9]] > cb)
                 if( p[pixel[10]] > cb)
                  if( p[pixel[11]] > cb)
                   if( p[pixel[12]] > cb)
                    if( p[pixel[6]] > cb)
                     if( p[pixel[5]] > cb)
                      goto is_a_corner;
                     else
                      if( p[pixel[14]] > cb)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                    else
                     if( p[pixel[14]] > cb)
                      if( p[pixel[15]] > cb)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else if( p[pixel[13]] < c_b)
              if( p[pixel[11]] > cb)
               if( p[pixel[5]] > cb)
                if( p[pixel[6]] > cb)
                 if( p[pixel[7]] > cb)
                  if( p[pixel[8]] > cb)
                   if( p[pixel[9]] > cb)
                    if( p[pixel[10]] > cb)
                     if( p[pixel[12]] > cb)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else if( p[pixel[11]] < c_b)
               if( p[pixel[12]] < c_b)
                if( p[pixel[14]] < c_b)
                 if( p[pixel[15]] < c_b)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     if( p[pixel[9]] < c_b)
                      if( p[pixel[10]] < c_b)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     if( p[pixel[9]] < c_b)
                      if( p[pixel[10]] < c_b)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              if( p[pixel[5]] > cb)
               if( p[pixel[6]] > cb)
                if( p[pixel[7]] > cb)
                 if( p[pixel[8]] > cb)
                  if( p[pixel[9]] > cb)
                   if( p[pixel[10]] > cb)
                    if( p[pixel[11]] > cb)
                     if( p[pixel[12]] > cb)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
            else if( p[pixel[4]] < c_b)
             if( p[pixel[5]] > cb)
              if( p[pixel[14]] > cb)
               if( p[pixel[7]] > cb)
                if( p[pixel[8]] > cb)
                 if( p[pixel[9]] > cb)
                  if( p[pixel[10]] > cb)
                   if( p[pixel[11]] > cb)
                    if( p[pixel[12]] > cb)
                     if( p[pixel[13]] > cb)
                      if( p[pixel[6]] > cb)
                       goto is_a_corner;
                      else
                       if( p[pixel[15]] > cb)
                        goto is_a_corner;
                       else
                        goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else if( p[pixel[14]] < c_b)
               if( p[pixel[12]] > cb)
                if( p[pixel[6]] > cb)
                 if( p[pixel[7]] > cb)
                  if( p[pixel[8]] > cb)
                   if( p[pixel[9]] > cb)
                    if( p[pixel[10]] > cb)
                     if( p[pixel[11]] > cb)
                      if( p[pixel[13]] > cb)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else if( p[pixel[12]] < c_b)
                if( p[pixel[13]] < c_b)
                 if( p[pixel[15]] < c_b)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     if( p[pixel[9]] < c_b)
                      if( p[pixel[10]] < c_b)
                       if( p[pixel[11]] < c_b)
                        goto is_a_corner;
                       else
                        goto is_not_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               if( p[pixel[6]] > cb)
                if( p[pixel[7]] > cb)
                 if( p[pixel[8]] > cb)
                  if( p[pixel[9]] > cb)
                   if( p[pixel[10]] > cb)
                    if( p[pixel[11]] > cb)
                     if( p[pixel[12]] > cb)
                      if( p[pixel[13]] > cb)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else if( p[pixel[5]] < c_b)
              if( p[pixel[6]] > cb)
               if( p[pixel[15]] < c_b)
                if( p[pixel[13]] > cb)
                 if( p[pixel[7]] > cb)
                  if( p[pixel[8]] > cb)
                   if( p[pixel[9]] > cb)
                    if( p[pixel[10]] > cb)
                     if( p[pixel[11]] > cb)
                      if( p[pixel[12]] > cb)
                       if( p[pixel[14]] > cb)
                        goto is_a_corner;
                       else
                        goto is_not_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else if( p[pixel[13]] < c_b)
                 if( p[pixel[14]] < c_b)
                  goto is_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                if( p[pixel[7]] > cb)
                 if( p[pixel[8]] > cb)
                  if( p[pixel[9]] > cb)
                   if( p[pixel[10]] > cb)
                    if( p[pixel[11]] > cb)
                     if( p[pixel[12]] > cb)
                      if( p[pixel[13]] > cb)
                       if( p[pixel[14]] > cb)
                        goto is_a_corner;
                       else
                        goto is_not_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else if( p[pixel[6]] < c_b)
               if( p[pixel[7]] > cb)
                if( p[pixel[14]] > cb)
                 if( p[pixel[8]] > cb)
                  if( p[pixel[9]] > cb)
                   if( p[pixel[10]] > cb)
                    if( p[pixel[11]] > cb)
                     if( p[pixel[12]] > cb)
                      if( p[pixel[13]] > cb)
                       if( p[pixel[15]] > cb)
                        goto is_a_corner;
                       else
                        goto is_not_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else if( p[pixel[14]] < c_b)
                 if( p[pixel[15]] < c_b)
                  goto is_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else if( p[pixel[7]] < c_b)
                if( p[pixel[8]] < c_b)
                 goto is_a_corner;
                else
                 if( p[pixel[15]] < c_b)
                  goto is_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[14]] < c_b)
                 if( p[pixel[15]] < c_b)
                  goto is_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               if( p[pixel[13]] > cb)
                if( p[pixel[7]] > cb)
                 if( p[pixel[8]] > cb)
                  if( p[pixel[9]] > cb)
                   if( p[pixel[10]] > cb)
                    if( p[pixel[11]] > cb)
                     if( p[pixel[12]] > cb)
                      if( p[pixel[14]] > cb)
                       if( p[pixel[15]] > cb)
                        goto is_a_corner;
                       else
                        goto is_not_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else if( p[pixel[13]] < c_b)
                if( p[pixel[14]] < c_b)
                 if( p[pixel[15]] < c_b)
                  goto is_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else
              if( p[pixel[12]] > cb)
               if( p[pixel[7]] > cb)
                if( p[pixel[8]] > cb)
                 if( p[pixel[9]] > cb)
                  if( p[pixel[10]] > cb)
                   if( p[pixel[11]] > cb)
                    if( p[pixel[13]] > cb)
                     if( p[pixel[14]] > cb)
                      if( p[pixel[6]] > cb)
                       goto is_a_corner;
                      else
                       if( p[pixel[15]] > cb)
                        goto is_a_corner;
                       else
                        goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else if( p[pixel[12]] < c_b)
               if( p[pixel[13]] < c_b)
                if( p[pixel[14]] < c_b)
                 if( p[pixel[15]] < c_b)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     if( p[pixel[9]] < c_b)
                      if( p[pixel[10]] < c_b)
                       if( p[pixel[11]] < c_b)
                        goto is_a_corner;
                       else
                        goto is_not_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
            else
             if( p[pixel[11]] > cb)
              if( p[pixel[7]] > cb)
               if( p[pixel[8]] > cb)
                if( p[pixel[9]] > cb)
                 if( p[pixel[10]] > cb)
                  if( p[pixel[12]] > cb)
                   if( p[pixel[13]] > cb)
                    if( p[pixel[6]] > cb)
                     if( p[pixel[5]] > cb)
                      goto is_a_corner;
                     else
                      if( p[pixel[14]] > cb)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                    else
                     if( p[pixel[14]] > cb)
                      if( p[pixel[15]] > cb)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else if( p[pixel[11]] < c_b)
              if( p[pixel[12]] < c_b)
               if( p[pixel[13]] < c_b)
                if( p[pixel[14]] < c_b)
                 if( p[pixel[15]] < c_b)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     if( p[pixel[9]] < c_b)
                      if( p[pixel[10]] < c_b)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     if( p[pixel[9]] < c_b)
                      if( p[pixel[10]] < c_b)
                       goto is_a_corner;
                      else
                       goto is_not_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              goto is_not_a_corner;
           else
            if( p[pixel[10]] > cb)
             if( p[pixel[7]] > cb)
              if( p[pixel[8]] > cb)
               if( p[pixel[9]] > cb)
                if( p[pixel[11]] > cb)
                 if( p[pixel[12]] > cb)
                  if( p[pixel[6]] > cb)
                   if( p[pixel[5]] > cb)
                    if( p[pixel[4]] > cb)
                     goto is_a_corner;
                    else
                     if( p[pixel[13]] > cb)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                   else
                    if( p[pixel[13]] > cb)
                     if( p[pixel[14]] > cb)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                  else
                   if( p[pixel[13]] > cb)
                    if( p[pixel[14]] > cb)
                     if( p[pixel[15]] > cb)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else if( p[pixel[10]] < c_b)
             if( p[pixel[11]] < c_b)
              if( p[pixel[12]] < c_b)
               if( p[pixel[13]] < c_b)
                if( p[pixel[14]] < c_b)
                 if( p[pixel[15]] < c_b)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     if( p[pixel[9]] < c_b)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     if( p[pixel[9]] < c_b)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[4]] < c_b)
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     if( p[pixel[9]] < c_b)
                      goto is_a_corner;
                     else
                      goto is_not_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else
             goto is_not_a_corner;
          else
           if( p[pixel[9]] > cb)
            if( p[pixel[7]] > cb)
             if( p[pixel[8]] > cb)
              if( p[pixel[10]] > cb)
               if( p[pixel[11]] > cb)
                if( p[pixel[6]] > cb)
                 if( p[pixel[5]] > cb)
                  if( p[pixel[4]] > cb)
                   if( p[pixel[3]] > cb)
                    goto is_a_corner;
                   else
                    if( p[pixel[12]] > cb)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                  else
                   if( p[pixel[12]] > cb)
                    if( p[pixel[13]] > cb)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                 else
                  if( p[pixel[12]] > cb)
                   if( p[pixel[13]] > cb)
                    if( p[pixel[14]] > cb)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[12]] > cb)
                  if( p[pixel[13]] > cb)
                   if( p[pixel[14]] > cb)
                    if( p[pixel[15]] > cb)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else if( p[pixel[9]] < c_b)
            if( p[pixel[10]] < c_b)
             if( p[pixel[11]] < c_b)
              if( p[pixel[12]] < c_b)
               if( p[pixel[13]] < c_b)
                if( p[pixel[14]] < c_b)
                 if( p[pixel[15]] < c_b)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[4]] < c_b)
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               if( p[pixel[3]] < c_b)
                if( p[pixel[4]] < c_b)
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    if( p[pixel[8]] < c_b)
                     goto is_a_corner;
                    else
                     goto is_not_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else
            goto is_not_a_corner;
         else
          if( p[pixel[8]] > cb)
           if( p[pixel[7]] > cb)
            if( p[pixel[9]] > cb)
             if( p[pixel[10]] > cb)
              if( p[pixel[6]] > cb)
               if( p[pixel[5]] > cb)
                if( p[pixel[4]] > cb)
                 if( p[pixel[3]] > cb)
                  if( p[pixel[2]] > cb)
                   goto is_a_corner;
                  else
                   if( p[pixel[11]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                 else
                  if( p[pixel[11]] > cb)
                   if( p[pixel[12]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[11]] > cb)
                  if( p[pixel[12]] > cb)
                   if( p[pixel[13]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[11]] > cb)
                 if( p[pixel[12]] > cb)
                  if( p[pixel[13]] > cb)
                   if( p[pixel[14]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               if( p[pixel[11]] > cb)
                if( p[pixel[12]] > cb)
                 if( p[pixel[13]] > cb)
                  if( p[pixel[14]] > cb)
                   if( p[pixel[15]] > cb)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else
              goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else
            goto is_not_a_corner;
          else if( p[pixel[8]] < c_b)
           if( p[pixel[9]] < c_b)
            if( p[pixel[10]] < c_b)
             if( p[pixel[11]] < c_b)
              if( p[pixel[12]] < c_b)
               if( p[pixel[13]] < c_b)
                if( p[pixel[14]] < c_b)
                 if( p[pixel[15]] < c_b)
                  goto is_a_corner;
                 else
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[4]] < c_b)
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               if( p[pixel[3]] < c_b)
                if( p[pixel[4]] < c_b)
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else
              if( p[pixel[2]] < c_b)
               if( p[pixel[3]] < c_b)
                if( p[pixel[4]] < c_b)
                 if( p[pixel[5]] < c_b)
                  if( p[pixel[6]] < c_b)
                   if( p[pixel[7]] < c_b)
                    goto is_a_corner;
                   else
                    goto is_not_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
            else
             goto is_not_a_corner;
           else
            goto is_not_a_corner;
          else
           goto is_not_a_corner;
        else
         if( p[pixel[7]] > cb)
          if( p[pixel[8]] > cb)
           if( p[pixel[9]] > cb)
            if( p[pixel[6]] > cb)
             if( p[pixel[5]] > cb)
              if( p[pixel[4]] > cb)
               if( p[pixel[3]] > cb)
                if( p[pixel[2]] > cb)
                 if( p[pixel[1]] > cb)
                  goto is_a_corner;
                 else
                  if( p[pixel[10]] > cb)
                   goto is_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[10]] > cb)
                  if( p[pixel[11]] > cb)
                   goto is_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[10]] > cb)
                 if( p[pixel[11]] > cb)
                  if( p[pixel[12]] > cb)
                   goto is_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               if( p[pixel[10]] > cb)
                if( p[pixel[11]] > cb)
                 if( p[pixel[12]] > cb)
                  if( p[pixel[13]] > cb)
                   goto is_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else
              if( p[pixel[10]] > cb)
               if( p[pixel[11]] > cb)
                if( p[pixel[12]] > cb)
                 if( p[pixel[13]] > cb)
                  if( p[pixel[14]] > cb)
                   goto is_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
            else
             if( p[pixel[10]] > cb)
              if( p[pixel[11]] > cb)
               if( p[pixel[12]] > cb)
                if( p[pixel[13]] > cb)
                 if( p[pixel[14]] > cb)
                  if( p[pixel[15]] > cb)
                   goto is_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              goto is_not_a_corner;
           else
            goto is_not_a_corner;
          else
           goto is_not_a_corner;
         else if( p[pixel[7]] < c_b)
          if( p[pixel[8]] < c_b)
           if( p[pixel[9]] < c_b)
            if( p[pixel[6]] < c_b)
             if( p[pixel[5]] < c_b)
              if( p[pixel[4]] < c_b)
               if( p[pixel[3]] < c_b)
                if( p[pixel[2]] < c_b)
                 if( p[pixel[1]] < c_b)
                  goto is_a_corner;
                 else
                  if( p[pixel[10]] < c_b)
                   goto is_a_corner;
                  else
                   goto is_not_a_corner;
                else
                 if( p[pixel[10]] < c_b)
                  if( p[pixel[11]] < c_b)
                   goto is_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
               else
                if( p[pixel[10]] < c_b)
                 if( p[pixel[11]] < c_b)
                  if( p[pixel[12]] < c_b)
                   goto is_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
              else
               if( p[pixel[10]] < c_b)
                if( p[pixel[11]] < c_b)
                 if( p[pixel[12]] < c_b)
                  if( p[pixel[13]] < c_b)
                   goto is_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
             else
              if( p[pixel[10]] < c_b)
               if( p[pixel[11]] < c_b)
                if( p[pixel[12]] < c_b)
                 if( p[pixel[13]] < c_b)
                  if( p[pixel[14]] < c_b)
                   goto is_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
            else
             if( p[pixel[10]] < c_b)
              if( p[pixel[11]] < c_b)
               if( p[pixel[12]] < c_b)
                if( p[pixel[13]] < c_b)
                 if( p[pixel[14]] < c_b)
                  if( p[pixel[15]] < c_b)
                   goto is_a_corner;
                  else
                   goto is_not_a_corner;
                 else
                  goto is_not_a_corner;
                else
                 goto is_not_a_corner;
               else
                goto is_not_a_corner;
              else
               goto is_not_a_corner;
             else
              goto is_not_a_corner;
           else
            goto is_not_a_corner;
          else
           goto is_not_a_corner;
         else
          goto is_not_a_corner;
    }
		
    is_a_corner:
			bmin=b;
			goto end_if;

		is_not_a_corner:
			bmax=b;
			goto end_if;

		end_if:

		if(bmin == bmax - 1 || bmin == bmax)
			return bmin;
		b = (bmin + bmax) / 2;
    }
}

static void make_offsets(int pixel[], const size_t row_stride)
{
        pixel[0] = 0 +  3 * row_stride;
        pixel[1] = 1 +  3 * row_stride;
        pixel[2] = 2 +  2 * row_stride;
        pixel[3] = 3 +  1 * row_stride;
        pixel[4] = 3 +  0 * row_stride;
        pixel[5] = 3 +  -1 * row_stride;
        pixel[6] = 2 +  -2 * row_stride;
        pixel[7] = 1 +  -3 * row_stride;
        pixel[8] = 0 +  -3 * row_stride;
        pixel[9] = -1 +  -3 * row_stride;
        pixel[10] = -2 +  -2 * row_stride;
        pixel[11] = -3 +  -1 * row_stride;
        pixel[12] = -3 +  0 * row_stride;
        pixel[13] = -3 +  1 * row_stride;
        pixel[14] = -2 +  2 * row_stride;
        pixel[15] = -1 +  3 * row_stride;
}



std::vector<int> fast9_score(cv::Mat im, std::vector<xy> corners, int b)
{	
  std::vector<int> scores;

  double minVal, maxVal;
  cv::minMaxIdx(im, &minVal, &maxVal); //TODO: This could be somewhere else.
	int bmax = maxVal;

	int pixel[16];
	make_offsets(pixel, im.step1());

  for(xy c : corners) {
    const uint16_t *p = (uint16_t*) (im.data + c.y * im.step[0] + c.x * im.step[1]);
    scores.push_back(fast9_corner_score(p, pixel, b, bmax));
  }
	return scores;
}


std::vector<xy> fast9_detect(const cv::Mat im, int b)
{
	int num_corners=0;
	std::vector<xy> corners;
	int pixel[16];
	int x, y;

	make_offsets(pixel, im.step1());

	for(y=3; y < im.rows - 3; y++)
		for(x=3; x < im.cols - 3; x++)
		{
			const uint16_t* p = (uint16_t*) (im.data + y*im.step[0] + x*im.step[1]);
		
			int cb = *p + b;
			int c_b= *p - b;

      // Generated code
      {
        if(p[pixel[0]] > cb)
         if(p[pixel[1]] > cb)
          if(p[pixel[2]] > cb)
           if(p[pixel[3]] > cb)
            if(p[pixel[4]] > cb)
             if(p[pixel[5]] > cb)
              if(p[pixel[6]] > cb)
               if(p[pixel[7]] > cb)
                if(p[pixel[8]] > cb)
                 {}
                else
                 if(p[pixel[15]] > cb)
                  {}
                 else
                  continue;
               else if(p[pixel[7]] < c_b)
                if(p[pixel[14]] > cb)
                 if(p[pixel[15]] > cb)
                  {}
                 else
                  continue;
                else if(p[pixel[14]] < c_b)
                 if(p[pixel[8]] < c_b)
                  if(p[pixel[9]] < c_b)
                   if(p[pixel[10]] < c_b)
                    if(p[pixel[11]] < c_b)
                     if(p[pixel[12]] < c_b)
                      if(p[pixel[13]] < c_b)
                       if(p[pixel[15]] < c_b)
                        {}
                       else
                        continue;
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                if(p[pixel[14]] > cb)
                 if(p[pixel[15]] > cb)
                  {}
                 else
                  continue;
                else
                 continue;
              else if(p[pixel[6]] < c_b)
               if(p[pixel[15]] > cb)
                if(p[pixel[13]] > cb)
                 if(p[pixel[14]] > cb)
                  {}
                 else
                  continue;
                else if(p[pixel[13]] < c_b)
                 if(p[pixel[7]] < c_b)
                  if(p[pixel[8]] < c_b)
                   if(p[pixel[9]] < c_b)
                    if(p[pixel[10]] < c_b)
                     if(p[pixel[11]] < c_b)
                      if(p[pixel[12]] < c_b)
                       if(p[pixel[14]] < c_b)
                        {}
                       else
                        continue;
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                if(p[pixel[7]] < c_b)
                 if(p[pixel[8]] < c_b)
                  if(p[pixel[9]] < c_b)
                   if(p[pixel[10]] < c_b)
                    if(p[pixel[11]] < c_b)
                     if(p[pixel[12]] < c_b)
                      if(p[pixel[13]] < c_b)
                       if(p[pixel[14]] < c_b)
                        {}
                       else
                        continue;
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               if(p[pixel[13]] > cb)
                if(p[pixel[14]] > cb)
                 if(p[pixel[15]] > cb)
                  {}
                 else
                  continue;
                else
                 continue;
               else if(p[pixel[13]] < c_b)
                if(p[pixel[7]] < c_b)
                 if(p[pixel[8]] < c_b)
                  if(p[pixel[9]] < c_b)
                   if(p[pixel[10]] < c_b)
                    if(p[pixel[11]] < c_b)
                     if(p[pixel[12]] < c_b)
                      if(p[pixel[14]] < c_b)
                       if(p[pixel[15]] < c_b)
                        {}
                       else
                        continue;
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else if(p[pixel[5]] < c_b)
              if(p[pixel[14]] > cb)
               if(p[pixel[12]] > cb)
                if(p[pixel[13]] > cb)
                 if(p[pixel[15]] > cb)
                  {}
                 else
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     if(p[pixel[9]] > cb)
                      if(p[pixel[10]] > cb)
                       if(p[pixel[11]] > cb)
                        {}
                       else
                        continue;
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 continue;
               else if(p[pixel[12]] < c_b)
                if(p[pixel[6]] < c_b)
                 if(p[pixel[7]] < c_b)
                  if(p[pixel[8]] < c_b)
                   if(p[pixel[9]] < c_b)
                    if(p[pixel[10]] < c_b)
                     if(p[pixel[11]] < c_b)
                      if(p[pixel[13]] < c_b)
                       {}
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else if(p[pixel[14]] < c_b)
               if(p[pixel[7]] < c_b)
                if(p[pixel[8]] < c_b)
                 if(p[pixel[9]] < c_b)
                  if(p[pixel[10]] < c_b)
                   if(p[pixel[11]] < c_b)
                    if(p[pixel[12]] < c_b)
                     if(p[pixel[13]] < c_b)
                      if(p[pixel[6]] < c_b)
                       {}
                      else
                       if(p[pixel[15]] < c_b)
                        {}
                       else
                        continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               if(p[pixel[6]] < c_b)
                if(p[pixel[7]] < c_b)
                 if(p[pixel[8]] < c_b)
                  if(p[pixel[9]] < c_b)
                   if(p[pixel[10]] < c_b)
                    if(p[pixel[11]] < c_b)
                     if(p[pixel[12]] < c_b)
                      if(p[pixel[13]] < c_b)
                       {}
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else
              if(p[pixel[12]] > cb)
               if(p[pixel[13]] > cb)
                if(p[pixel[14]] > cb)
                 if(p[pixel[15]] > cb)
                  {}
                 else
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     if(p[pixel[9]] > cb)
                      if(p[pixel[10]] > cb)
                       if(p[pixel[11]] > cb)
                        {}
                       else
                        continue;
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 continue;
               else
                continue;
              else if(p[pixel[12]] < c_b)
               if(p[pixel[7]] < c_b)
                if(p[pixel[8]] < c_b)
                 if(p[pixel[9]] < c_b)
                  if(p[pixel[10]] < c_b)
                   if(p[pixel[11]] < c_b)
                    if(p[pixel[13]] < c_b)
                     if(p[pixel[14]] < c_b)
                      if(p[pixel[6]] < c_b)
                       {}
                      else
                       if(p[pixel[15]] < c_b)
                        {}
                       else
                        continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
            else if(p[pixel[4]] < c_b)
             if(p[pixel[13]] > cb)
              if(p[pixel[11]] > cb)
               if(p[pixel[12]] > cb)
                if(p[pixel[14]] > cb)
                 if(p[pixel[15]] > cb)
                  {}
                 else
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     if(p[pixel[9]] > cb)
                      if(p[pixel[10]] > cb)
                       {}
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     if(p[pixel[9]] > cb)
                      if(p[pixel[10]] > cb)
                       {}
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                continue;
              else if(p[pixel[11]] < c_b)
               if(p[pixel[5]] < c_b)
                if(p[pixel[6]] < c_b)
                 if(p[pixel[7]] < c_b)
                  if(p[pixel[8]] < c_b)
                   if(p[pixel[9]] < c_b)
                    if(p[pixel[10]] < c_b)
                     if(p[pixel[12]] < c_b)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
             else if(p[pixel[13]] < c_b)
              if(p[pixel[7]] < c_b)
               if(p[pixel[8]] < c_b)
                if(p[pixel[9]] < c_b)
                 if(p[pixel[10]] < c_b)
                  if(p[pixel[11]] < c_b)
                   if(p[pixel[12]] < c_b)
                    if(p[pixel[6]] < c_b)
                     if(p[pixel[5]] < c_b)
                      {}
                     else
                      if(p[pixel[14]] < c_b)
                       {}
                      else
                       continue;
                    else
                     if(p[pixel[14]] < c_b)
                      if(p[pixel[15]] < c_b)
                       {}
                      else
                       continue;
                     else
                      continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
             else
              if(p[pixel[5]] < c_b)
               if(p[pixel[6]] < c_b)
                if(p[pixel[7]] < c_b)
                 if(p[pixel[8]] < c_b)
                  if(p[pixel[9]] < c_b)
                   if(p[pixel[10]] < c_b)
                    if(p[pixel[11]] < c_b)
                     if(p[pixel[12]] < c_b)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
            else
             if(p[pixel[11]] > cb)
              if(p[pixel[12]] > cb)
               if(p[pixel[13]] > cb)
                if(p[pixel[14]] > cb)
                 if(p[pixel[15]] > cb)
                  {}
                 else
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     if(p[pixel[9]] > cb)
                      if(p[pixel[10]] > cb)
                       {}
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     if(p[pixel[9]] > cb)
                      if(p[pixel[10]] > cb)
                       {}
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                continue;
              else
               continue;
             else if(p[pixel[11]] < c_b)
              if(p[pixel[7]] < c_b)
               if(p[pixel[8]] < c_b)
                if(p[pixel[9]] < c_b)
                 if(p[pixel[10]] < c_b)
                  if(p[pixel[12]] < c_b)
                   if(p[pixel[13]] < c_b)
                    if(p[pixel[6]] < c_b)
                     if(p[pixel[5]] < c_b)
                      {}
                     else
                      if(p[pixel[14]] < c_b)
                       {}
                      else
                       continue;
                    else
                     if(p[pixel[14]] < c_b)
                      if(p[pixel[15]] < c_b)
                       {}
                      else
                       continue;
                     else
                      continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
             else
              continue;
           else if(p[pixel[3]] < c_b)
            if(p[pixel[10]] > cb)
             if(p[pixel[11]] > cb)
              if(p[pixel[12]] > cb)
               if(p[pixel[13]] > cb)
                if(p[pixel[14]] > cb)
                 if(p[pixel[15]] > cb)
                  {}
                 else
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     if(p[pixel[9]] > cb)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     if(p[pixel[9]] > cb)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[4]] > cb)
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     if(p[pixel[9]] > cb)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               continue;
             else
              continue;
            else if(p[pixel[10]] < c_b)
             if(p[pixel[7]] < c_b)
              if(p[pixel[8]] < c_b)
               if(p[pixel[9]] < c_b)
                if(p[pixel[11]] < c_b)
                 if(p[pixel[6]] < c_b)
                  if(p[pixel[5]] < c_b)
                   if(p[pixel[4]] < c_b)
                    {}
                   else
                    if(p[pixel[12]] < c_b)
                     if(p[pixel[13]] < c_b)
                      {}
                     else
                      continue;
                    else
                     continue;
                  else
                   if(p[pixel[12]] < c_b)
                    if(p[pixel[13]] < c_b)
                     if(p[pixel[14]] < c_b)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                 else
                  if(p[pixel[12]] < c_b)
                   if(p[pixel[13]] < c_b)
                    if(p[pixel[14]] < c_b)
                     if(p[pixel[15]] < c_b)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 continue;
               else
                continue;
              else
               continue;
             else
              continue;
            else
             continue;
           else
            if(p[pixel[10]] > cb)
             if(p[pixel[11]] > cb)
              if(p[pixel[12]] > cb)
               if(p[pixel[13]] > cb)
                if(p[pixel[14]] > cb)
                 if(p[pixel[15]] > cb)
                  {}
                 else
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     if(p[pixel[9]] > cb)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     if(p[pixel[9]] > cb)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[4]] > cb)
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     if(p[pixel[9]] > cb)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               continue;
             else
              continue;
            else if(p[pixel[10]] < c_b)
             if(p[pixel[7]] < c_b)
              if(p[pixel[8]] < c_b)
               if(p[pixel[9]] < c_b)
                if(p[pixel[11]] < c_b)
                 if(p[pixel[12]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[5]] < c_b)
                    if(p[pixel[4]] < c_b)
                     {}
                    else
                     if(p[pixel[13]] < c_b)
                      {}
                     else
                      continue;
                   else
                    if(p[pixel[13]] < c_b)
                     if(p[pixel[14]] < c_b)
                      {}
                     else
                      continue;
                    else
                     continue;
                  else
                   if(p[pixel[13]] < c_b)
                    if(p[pixel[14]] < c_b)
                     if(p[pixel[15]] < c_b)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
             else
              continue;
            else
             continue;
          else if(p[pixel[2]] < c_b)
           if(p[pixel[9]] > cb)
            if(p[pixel[10]] > cb)
             if(p[pixel[11]] > cb)
              if(p[pixel[12]] > cb)
               if(p[pixel[13]] > cb)
                if(p[pixel[14]] > cb)
                 if(p[pixel[15]] > cb)
                  {}
                 else
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[4]] > cb)
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               if(p[pixel[3]] > cb)
                if(p[pixel[4]] > cb)
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else
              continue;
            else
             continue;
           else if(p[pixel[9]] < c_b)
            if(p[pixel[7]] < c_b)
             if(p[pixel[8]] < c_b)
              if(p[pixel[10]] < c_b)
               if(p[pixel[6]] < c_b)
                if(p[pixel[5]] < c_b)
                 if(p[pixel[4]] < c_b)
                  if(p[pixel[3]] < c_b)
                   {}
                  else
                   if(p[pixel[11]] < c_b)
                    if(p[pixel[12]] < c_b)
                     {}
                    else
                     continue;
                   else
                    continue;
                 else
                  if(p[pixel[11]] < c_b)
                   if(p[pixel[12]] < c_b)
                    if(p[pixel[13]] < c_b)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[11]] < c_b)
                  if(p[pixel[12]] < c_b)
                   if(p[pixel[13]] < c_b)
                    if(p[pixel[14]] < c_b)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[11]] < c_b)
                 if(p[pixel[12]] < c_b)
                  if(p[pixel[13]] < c_b)
                   if(p[pixel[14]] < c_b)
                    if(p[pixel[15]] < c_b)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               continue;
             else
              continue;
            else
             continue;
           else
            continue;
          else
           if(p[pixel[9]] > cb)
            if(p[pixel[10]] > cb)
             if(p[pixel[11]] > cb)
              if(p[pixel[12]] > cb)
               if(p[pixel[13]] > cb)
                if(p[pixel[14]] > cb)
                 if(p[pixel[15]] > cb)
                  {}
                 else
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[4]] > cb)
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               if(p[pixel[3]] > cb)
                if(p[pixel[4]] > cb)
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    if(p[pixel[8]] > cb)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else
              continue;
            else
             continue;
           else if(p[pixel[9]] < c_b)
            if(p[pixel[7]] < c_b)
             if(p[pixel[8]] < c_b)
              if(p[pixel[10]] < c_b)
               if(p[pixel[11]] < c_b)
                if(p[pixel[6]] < c_b)
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[4]] < c_b)
                   if(p[pixel[3]] < c_b)
                    {}
                   else
                    if(p[pixel[12]] < c_b)
                     {}
                    else
                     continue;
                  else
                   if(p[pixel[12]] < c_b)
                    if(p[pixel[13]] < c_b)
                     {}
                    else
                     continue;
                   else
                    continue;
                 else
                  if(p[pixel[12]] < c_b)
                   if(p[pixel[13]] < c_b)
                    if(p[pixel[14]] < c_b)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[12]] < c_b)
                  if(p[pixel[13]] < c_b)
                   if(p[pixel[14]] < c_b)
                    if(p[pixel[15]] < c_b)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                continue;
              else
               continue;
             else
              continue;
            else
             continue;
           else
            continue;
         else if(p[pixel[1]] < c_b)
          if(p[pixel[8]] > cb)
           if(p[pixel[9]] > cb)
            if(p[pixel[10]] > cb)
             if(p[pixel[11]] > cb)
              if(p[pixel[12]] > cb)
               if(p[pixel[13]] > cb)
                if(p[pixel[14]] > cb)
                 if(p[pixel[15]] > cb)
                  {}
                 else
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[4]] > cb)
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               if(p[pixel[3]] > cb)
                if(p[pixel[4]] > cb)
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else
              if(p[pixel[2]] > cb)
               if(p[pixel[3]] > cb)
                if(p[pixel[4]] > cb)
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
            else
             continue;
           else
            continue;
          else if(p[pixel[8]] < c_b)
           if(p[pixel[7]] < c_b)
            if(p[pixel[9]] < c_b)
             if(p[pixel[6]] < c_b)
              if(p[pixel[5]] < c_b)
               if(p[pixel[4]] < c_b)
                if(p[pixel[3]] < c_b)
                 if(p[pixel[2]] < c_b)
                  {}
                 else
                  if(p[pixel[10]] < c_b)
                   if(p[pixel[11]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[10]] < c_b)
                  if(p[pixel[11]] < c_b)
                   if(p[pixel[12]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[10]] < c_b)
                 if(p[pixel[11]] < c_b)
                  if(p[pixel[12]] < c_b)
                   if(p[pixel[13]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               if(p[pixel[10]] < c_b)
                if(p[pixel[11]] < c_b)
                 if(p[pixel[12]] < c_b)
                  if(p[pixel[13]] < c_b)
                   if(p[pixel[14]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else
              if(p[pixel[10]] < c_b)
               if(p[pixel[11]] < c_b)
                if(p[pixel[12]] < c_b)
                 if(p[pixel[13]] < c_b)
                  if(p[pixel[14]] < c_b)
                   if(p[pixel[15]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
            else
             continue;
           else
            continue;
          else
           continue;
         else
          if(p[pixel[8]] > cb)
           if(p[pixel[9]] > cb)
            if(p[pixel[10]] > cb)
             if(p[pixel[11]] > cb)
              if(p[pixel[12]] > cb)
               if(p[pixel[13]] > cb)
                if(p[pixel[14]] > cb)
                 if(p[pixel[15]] > cb)
                  {}
                 else
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[4]] > cb)
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               if(p[pixel[3]] > cb)
                if(p[pixel[4]] > cb)
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else
              if(p[pixel[2]] > cb)
               if(p[pixel[3]] > cb)
                if(p[pixel[4]] > cb)
                 if(p[pixel[5]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[7]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
            else
             continue;
           else
            continue;
          else if(p[pixel[8]] < c_b)
           if(p[pixel[7]] < c_b)
            if(p[pixel[9]] < c_b)
             if(p[pixel[10]] < c_b)
              if(p[pixel[6]] < c_b)
               if(p[pixel[5]] < c_b)
                if(p[pixel[4]] < c_b)
                 if(p[pixel[3]] < c_b)
                  if(p[pixel[2]] < c_b)
                   {}
                  else
                   if(p[pixel[11]] < c_b)
                    {}
                   else
                    continue;
                 else
                  if(p[pixel[11]] < c_b)
                   if(p[pixel[12]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[11]] < c_b)
                  if(p[pixel[12]] < c_b)
                   if(p[pixel[13]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[11]] < c_b)
                 if(p[pixel[12]] < c_b)
                  if(p[pixel[13]] < c_b)
                   if(p[pixel[14]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               if(p[pixel[11]] < c_b)
                if(p[pixel[12]] < c_b)
                 if(p[pixel[13]] < c_b)
                  if(p[pixel[14]] < c_b)
                   if(p[pixel[15]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else
              continue;
            else
             continue;
           else
            continue;
          else
           continue;
        else if(p[pixel[0]] < c_b)
         if(p[pixel[1]] > cb)
          if(p[pixel[8]] > cb)
           if(p[pixel[7]] > cb)
            if(p[pixel[9]] > cb)
             if(p[pixel[6]] > cb)
              if(p[pixel[5]] > cb)
               if(p[pixel[4]] > cb)
                if(p[pixel[3]] > cb)
                 if(p[pixel[2]] > cb)
                  {}
                 else
                  if(p[pixel[10]] > cb)
                   if(p[pixel[11]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[10]] > cb)
                  if(p[pixel[11]] > cb)
                   if(p[pixel[12]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[10]] > cb)
                 if(p[pixel[11]] > cb)
                  if(p[pixel[12]] > cb)
                   if(p[pixel[13]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               if(p[pixel[10]] > cb)
                if(p[pixel[11]] > cb)
                 if(p[pixel[12]] > cb)
                  if(p[pixel[13]] > cb)
                   if(p[pixel[14]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else
              if(p[pixel[10]] > cb)
               if(p[pixel[11]] > cb)
                if(p[pixel[12]] > cb)
                 if(p[pixel[13]] > cb)
                  if(p[pixel[14]] > cb)
                   if(p[pixel[15]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
            else
             continue;
           else
            continue;
          else if(p[pixel[8]] < c_b)
           if(p[pixel[9]] < c_b)
            if(p[pixel[10]] < c_b)
             if(p[pixel[11]] < c_b)
              if(p[pixel[12]] < c_b)
               if(p[pixel[13]] < c_b)
                if(p[pixel[14]] < c_b)
                 if(p[pixel[15]] < c_b)
                  {}
                 else
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[4]] < c_b)
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               if(p[pixel[3]] < c_b)
                if(p[pixel[4]] < c_b)
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else
              if(p[pixel[2]] < c_b)
               if(p[pixel[3]] < c_b)
                if(p[pixel[4]] < c_b)
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
            else
             continue;
           else
            continue;
          else
           continue;
         else if(p[pixel[1]] < c_b)
          if(p[pixel[2]] > cb)
           if(p[pixel[9]] > cb)
            if(p[pixel[7]] > cb)
             if(p[pixel[8]] > cb)
              if(p[pixel[10]] > cb)
               if(p[pixel[6]] > cb)
                if(p[pixel[5]] > cb)
                 if(p[pixel[4]] > cb)
                  if(p[pixel[3]] > cb)
                   {}
                  else
                   if(p[pixel[11]] > cb)
                    if(p[pixel[12]] > cb)
                     {}
                    else
                     continue;
                   else
                    continue;
                 else
                  if(p[pixel[11]] > cb)
                   if(p[pixel[12]] > cb)
                    if(p[pixel[13]] > cb)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[11]] > cb)
                  if(p[pixel[12]] > cb)
                   if(p[pixel[13]] > cb)
                    if(p[pixel[14]] > cb)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[11]] > cb)
                 if(p[pixel[12]] > cb)
                  if(p[pixel[13]] > cb)
                   if(p[pixel[14]] > cb)
                    if(p[pixel[15]] > cb)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               continue;
             else
              continue;
            else
             continue;
           else if(p[pixel[9]] < c_b)
            if(p[pixel[10]] < c_b)
             if(p[pixel[11]] < c_b)
              if(p[pixel[12]] < c_b)
               if(p[pixel[13]] < c_b)
                if(p[pixel[14]] < c_b)
                 if(p[pixel[15]] < c_b)
                  {}
                 else
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[4]] < c_b)
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               if(p[pixel[3]] < c_b)
                if(p[pixel[4]] < c_b)
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else
              continue;
            else
             continue;
           else
            continue;
          else if(p[pixel[2]] < c_b)
           if(p[pixel[3]] > cb)
            if(p[pixel[10]] > cb)
             if(p[pixel[7]] > cb)
              if(p[pixel[8]] > cb)
               if(p[pixel[9]] > cb)
                if(p[pixel[11]] > cb)
                 if(p[pixel[6]] > cb)
                  if(p[pixel[5]] > cb)
                   if(p[pixel[4]] > cb)
                    {}
                   else
                    if(p[pixel[12]] > cb)
                     if(p[pixel[13]] > cb)
                      {}
                     else
                      continue;
                    else
                     continue;
                  else
                   if(p[pixel[12]] > cb)
                    if(p[pixel[13]] > cb)
                     if(p[pixel[14]] > cb)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                 else
                  if(p[pixel[12]] > cb)
                   if(p[pixel[13]] > cb)
                    if(p[pixel[14]] > cb)
                     if(p[pixel[15]] > cb)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 continue;
               else
                continue;
              else
               continue;
             else
              continue;
            else if(p[pixel[10]] < c_b)
             if(p[pixel[11]] < c_b)
              if(p[pixel[12]] < c_b)
               if(p[pixel[13]] < c_b)
                if(p[pixel[14]] < c_b)
                 if(p[pixel[15]] < c_b)
                  {}
                 else
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     if(p[pixel[9]] < c_b)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     if(p[pixel[9]] < c_b)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[4]] < c_b)
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     if(p[pixel[9]] < c_b)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               continue;
             else
              continue;
            else
             continue;
           else if(p[pixel[3]] < c_b)
            if(p[pixel[4]] > cb)
             if(p[pixel[13]] > cb)
              if(p[pixel[7]] > cb)
               if(p[pixel[8]] > cb)
                if(p[pixel[9]] > cb)
                 if(p[pixel[10]] > cb)
                  if(p[pixel[11]] > cb)
                   if(p[pixel[12]] > cb)
                    if(p[pixel[6]] > cb)
                     if(p[pixel[5]] > cb)
                      {}
                     else
                      if(p[pixel[14]] > cb)
                       {}
                      else
                       continue;
                    else
                     if(p[pixel[14]] > cb)
                      if(p[pixel[15]] > cb)
                       {}
                      else
                       continue;
                     else
                      continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
             else if(p[pixel[13]] < c_b)
              if(p[pixel[11]] > cb)
               if(p[pixel[5]] > cb)
                if(p[pixel[6]] > cb)
                 if(p[pixel[7]] > cb)
                  if(p[pixel[8]] > cb)
                   if(p[pixel[9]] > cb)
                    if(p[pixel[10]] > cb)
                     if(p[pixel[12]] > cb)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else if(p[pixel[11]] < c_b)
               if(p[pixel[12]] < c_b)
                if(p[pixel[14]] < c_b)
                 if(p[pixel[15]] < c_b)
                  {}
                 else
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     if(p[pixel[9]] < c_b)
                      if(p[pixel[10]] < c_b)
                       {}
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     if(p[pixel[9]] < c_b)
                      if(p[pixel[10]] < c_b)
                       {}
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                continue;
              else
               continue;
             else
              if(p[pixel[5]] > cb)
               if(p[pixel[6]] > cb)
                if(p[pixel[7]] > cb)
                 if(p[pixel[8]] > cb)
                  if(p[pixel[9]] > cb)
                   if(p[pixel[10]] > cb)
                    if(p[pixel[11]] > cb)
                     if(p[pixel[12]] > cb)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
            else if(p[pixel[4]] < c_b)
             if(p[pixel[5]] > cb)
              if(p[pixel[14]] > cb)
               if(p[pixel[7]] > cb)
                if(p[pixel[8]] > cb)
                 if(p[pixel[9]] > cb)
                  if(p[pixel[10]] > cb)
                   if(p[pixel[11]] > cb)
                    if(p[pixel[12]] > cb)
                     if(p[pixel[13]] > cb)
                      if(p[pixel[6]] > cb)
                       {}
                      else
                       if(p[pixel[15]] > cb)
                        {}
                       else
                        continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else if(p[pixel[14]] < c_b)
               if(p[pixel[12]] > cb)
                if(p[pixel[6]] > cb)
                 if(p[pixel[7]] > cb)
                  if(p[pixel[8]] > cb)
                   if(p[pixel[9]] > cb)
                    if(p[pixel[10]] > cb)
                     if(p[pixel[11]] > cb)
                      if(p[pixel[13]] > cb)
                       {}
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else if(p[pixel[12]] < c_b)
                if(p[pixel[13]] < c_b)
                 if(p[pixel[15]] < c_b)
                  {}
                 else
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     if(p[pixel[9]] < c_b)
                      if(p[pixel[10]] < c_b)
                       if(p[pixel[11]] < c_b)
                        {}
                       else
                        continue;
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 continue;
               else
                continue;
              else
               if(p[pixel[6]] > cb)
                if(p[pixel[7]] > cb)
                 if(p[pixel[8]] > cb)
                  if(p[pixel[9]] > cb)
                   if(p[pixel[10]] > cb)
                    if(p[pixel[11]] > cb)
                     if(p[pixel[12]] > cb)
                      if(p[pixel[13]] > cb)
                       {}
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else if(p[pixel[5]] < c_b)
              if(p[pixel[6]] > cb)
               if(p[pixel[15]] < c_b)
                if(p[pixel[13]] > cb)
                 if(p[pixel[7]] > cb)
                  if(p[pixel[8]] > cb)
                   if(p[pixel[9]] > cb)
                    if(p[pixel[10]] > cb)
                     if(p[pixel[11]] > cb)
                      if(p[pixel[12]] > cb)
                       if(p[pixel[14]] > cb)
                        {}
                       else
                        continue;
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else if(p[pixel[13]] < c_b)
                 if(p[pixel[14]] < c_b)
                  {}
                 else
                  continue;
                else
                 continue;
               else
                if(p[pixel[7]] > cb)
                 if(p[pixel[8]] > cb)
                  if(p[pixel[9]] > cb)
                   if(p[pixel[10]] > cb)
                    if(p[pixel[11]] > cb)
                     if(p[pixel[12]] > cb)
                      if(p[pixel[13]] > cb)
                       if(p[pixel[14]] > cb)
                        {}
                       else
                        continue;
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else if(p[pixel[6]] < c_b)
               if(p[pixel[7]] > cb)
                if(p[pixel[14]] > cb)
                 if(p[pixel[8]] > cb)
                  if(p[pixel[9]] > cb)
                   if(p[pixel[10]] > cb)
                    if(p[pixel[11]] > cb)
                     if(p[pixel[12]] > cb)
                      if(p[pixel[13]] > cb)
                       if(p[pixel[15]] > cb)
                        {}
                       else
                        continue;
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else if(p[pixel[14]] < c_b)
                 if(p[pixel[15]] < c_b)
                  {}
                 else
                  continue;
                else
                 continue;
               else if(p[pixel[7]] < c_b)
                if(p[pixel[8]] < c_b)
                 {}
                else
                 if(p[pixel[15]] < c_b)
                  {}
                 else
                  continue;
               else
                if(p[pixel[14]] < c_b)
                 if(p[pixel[15]] < c_b)
                  {}
                 else
                  continue;
                else
                 continue;
              else
               if(p[pixel[13]] > cb)
                if(p[pixel[7]] > cb)
                 if(p[pixel[8]] > cb)
                  if(p[pixel[9]] > cb)
                   if(p[pixel[10]] > cb)
                    if(p[pixel[11]] > cb)
                     if(p[pixel[12]] > cb)
                      if(p[pixel[14]] > cb)
                       if(p[pixel[15]] > cb)
                        {}
                       else
                        continue;
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else if(p[pixel[13]] < c_b)
                if(p[pixel[14]] < c_b)
                 if(p[pixel[15]] < c_b)
                  {}
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else
              if(p[pixel[12]] > cb)
               if(p[pixel[7]] > cb)
                if(p[pixel[8]] > cb)
                 if(p[pixel[9]] > cb)
                  if(p[pixel[10]] > cb)
                   if(p[pixel[11]] > cb)
                    if(p[pixel[13]] > cb)
                     if(p[pixel[14]] > cb)
                      if(p[pixel[6]] > cb)
                       {}
                      else
                       if(p[pixel[15]] > cb)
                        {}
                       else
                        continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else if(p[pixel[12]] < c_b)
               if(p[pixel[13]] < c_b)
                if(p[pixel[14]] < c_b)
                 if(p[pixel[15]] < c_b)
                  {}
                 else
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     if(p[pixel[9]] < c_b)
                      if(p[pixel[10]] < c_b)
                       if(p[pixel[11]] < c_b)
                        {}
                       else
                        continue;
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 continue;
               else
                continue;
              else
               continue;
            else
             if(p[pixel[11]] > cb)
              if(p[pixel[7]] > cb)
               if(p[pixel[8]] > cb)
                if(p[pixel[9]] > cb)
                 if(p[pixel[10]] > cb)
                  if(p[pixel[12]] > cb)
                   if(p[pixel[13]] > cb)
                    if(p[pixel[6]] > cb)
                     if(p[pixel[5]] > cb)
                      {}
                     else
                      if(p[pixel[14]] > cb)
                       {}
                      else
                       continue;
                    else
                     if(p[pixel[14]] > cb)
                      if(p[pixel[15]] > cb)
                       {}
                      else
                       continue;
                     else
                      continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
             else if(p[pixel[11]] < c_b)
              if(p[pixel[12]] < c_b)
               if(p[pixel[13]] < c_b)
                if(p[pixel[14]] < c_b)
                 if(p[pixel[15]] < c_b)
                  {}
                 else
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     if(p[pixel[9]] < c_b)
                      if(p[pixel[10]] < c_b)
                       {}
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     if(p[pixel[9]] < c_b)
                      if(p[pixel[10]] < c_b)
                       {}
                      else
                       continue;
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                continue;
              else
               continue;
             else
              continue;
           else
            if(p[pixel[10]] > cb)
             if(p[pixel[7]] > cb)
              if(p[pixel[8]] > cb)
               if(p[pixel[9]] > cb)
                if(p[pixel[11]] > cb)
                 if(p[pixel[12]] > cb)
                  if(p[pixel[6]] > cb)
                   if(p[pixel[5]] > cb)
                    if(p[pixel[4]] > cb)
                     {}
                    else
                     if(p[pixel[13]] > cb)
                      {}
                     else
                      continue;
                   else
                    if(p[pixel[13]] > cb)
                     if(p[pixel[14]] > cb)
                      {}
                     else
                      continue;
                    else
                     continue;
                  else
                   if(p[pixel[13]] > cb)
                    if(p[pixel[14]] > cb)
                     if(p[pixel[15]] > cb)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
             else
              continue;
            else if(p[pixel[10]] < c_b)
             if(p[pixel[11]] < c_b)
              if(p[pixel[12]] < c_b)
               if(p[pixel[13]] < c_b)
                if(p[pixel[14]] < c_b)
                 if(p[pixel[15]] < c_b)
                  {}
                 else
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     if(p[pixel[9]] < c_b)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     if(p[pixel[9]] < c_b)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[4]] < c_b)
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     if(p[pixel[9]] < c_b)
                      {}
                     else
                      continue;
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               continue;
             else
              continue;
            else
             continue;
          else
           if(p[pixel[9]] > cb)
            if(p[pixel[7]] > cb)
             if(p[pixel[8]] > cb)
              if(p[pixel[10]] > cb)
               if(p[pixel[11]] > cb)
                if(p[pixel[6]] > cb)
                 if(p[pixel[5]] > cb)
                  if(p[pixel[4]] > cb)
                   if(p[pixel[3]] > cb)
                    {}
                   else
                    if(p[pixel[12]] > cb)
                     {}
                    else
                     continue;
                  else
                   if(p[pixel[12]] > cb)
                    if(p[pixel[13]] > cb)
                     {}
                    else
                     continue;
                   else
                    continue;
                 else
                  if(p[pixel[12]] > cb)
                   if(p[pixel[13]] > cb)
                    if(p[pixel[14]] > cb)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[12]] > cb)
                  if(p[pixel[13]] > cb)
                   if(p[pixel[14]] > cb)
                    if(p[pixel[15]] > cb)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                continue;
              else
               continue;
             else
              continue;
            else
             continue;
           else if(p[pixel[9]] < c_b)
            if(p[pixel[10]] < c_b)
             if(p[pixel[11]] < c_b)
              if(p[pixel[12]] < c_b)
               if(p[pixel[13]] < c_b)
                if(p[pixel[14]] < c_b)
                 if(p[pixel[15]] < c_b)
                  {}
                 else
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[4]] < c_b)
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               if(p[pixel[3]] < c_b)
                if(p[pixel[4]] < c_b)
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    if(p[pixel[8]] < c_b)
                     {}
                    else
                     continue;
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else
              continue;
            else
             continue;
           else
            continue;
         else
          if(p[pixel[8]] > cb)
           if(p[pixel[7]] > cb)
            if(p[pixel[9]] > cb)
             if(p[pixel[10]] > cb)
              if(p[pixel[6]] > cb)
               if(p[pixel[5]] > cb)
                if(p[pixel[4]] > cb)
                 if(p[pixel[3]] > cb)
                  if(p[pixel[2]] > cb)
                   {}
                  else
                   if(p[pixel[11]] > cb)
                    {}
                   else
                    continue;
                 else
                  if(p[pixel[11]] > cb)
                   if(p[pixel[12]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[11]] > cb)
                  if(p[pixel[12]] > cb)
                   if(p[pixel[13]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[11]] > cb)
                 if(p[pixel[12]] > cb)
                  if(p[pixel[13]] > cb)
                   if(p[pixel[14]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               if(p[pixel[11]] > cb)
                if(p[pixel[12]] > cb)
                 if(p[pixel[13]] > cb)
                  if(p[pixel[14]] > cb)
                   if(p[pixel[15]] > cb)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else
              continue;
            else
             continue;
           else
            continue;
          else if(p[pixel[8]] < c_b)
           if(p[pixel[9]] < c_b)
            if(p[pixel[10]] < c_b)
             if(p[pixel[11]] < c_b)
              if(p[pixel[12]] < c_b)
               if(p[pixel[13]] < c_b)
                if(p[pixel[14]] < c_b)
                 if(p[pixel[15]] < c_b)
                  {}
                 else
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                else
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[4]] < c_b)
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               if(p[pixel[3]] < c_b)
                if(p[pixel[4]] < c_b)
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else
              if(p[pixel[2]] < c_b)
               if(p[pixel[3]] < c_b)
                if(p[pixel[4]] < c_b)
                 if(p[pixel[5]] < c_b)
                  if(p[pixel[6]] < c_b)
                   if(p[pixel[7]] < c_b)
                    {}
                   else
                    continue;
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
            else
             continue;
           else
            continue;
          else
           continue;
        else
         if(p[pixel[7]] > cb)
          if(p[pixel[8]] > cb)
           if(p[pixel[9]] > cb)
            if(p[pixel[6]] > cb)
             if(p[pixel[5]] > cb)
              if(p[pixel[4]] > cb)
               if(p[pixel[3]] > cb)
                if(p[pixel[2]] > cb)
                 if(p[pixel[1]] > cb)
                  {}
                 else
                  if(p[pixel[10]] > cb)
                   {}
                  else
                   continue;
                else
                 if(p[pixel[10]] > cb)
                  if(p[pixel[11]] > cb)
                   {}
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[10]] > cb)
                 if(p[pixel[11]] > cb)
                  if(p[pixel[12]] > cb)
                   {}
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               if(p[pixel[10]] > cb)
                if(p[pixel[11]] > cb)
                 if(p[pixel[12]] > cb)
                  if(p[pixel[13]] > cb)
                   {}
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else
              if(p[pixel[10]] > cb)
               if(p[pixel[11]] > cb)
                if(p[pixel[12]] > cb)
                 if(p[pixel[13]] > cb)
                  if(p[pixel[14]] > cb)
                   {}
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
            else
             if(p[pixel[10]] > cb)
              if(p[pixel[11]] > cb)
               if(p[pixel[12]] > cb)
                if(p[pixel[13]] > cb)
                 if(p[pixel[14]] > cb)
                  if(p[pixel[15]] > cb)
                   {}
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
             else
              continue;
           else
            continue;
          else
           continue;
         else if(p[pixel[7]] < c_b)
          if(p[pixel[8]] < c_b)
           if(p[pixel[9]] < c_b)
            if(p[pixel[6]] < c_b)
             if(p[pixel[5]] < c_b)
              if(p[pixel[4]] < c_b)
               if(p[pixel[3]] < c_b)
                if(p[pixel[2]] < c_b)
                 if(p[pixel[1]] < c_b)
                  {}
                 else
                  if(p[pixel[10]] < c_b)
                   {}
                  else
                   continue;
                else
                 if(p[pixel[10]] < c_b)
                  if(p[pixel[11]] < c_b)
                   {}
                  else
                   continue;
                 else
                  continue;
               else
                if(p[pixel[10]] < c_b)
                 if(p[pixel[11]] < c_b)
                  if(p[pixel[12]] < c_b)
                   {}
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
              else
               if(p[pixel[10]] < c_b)
                if(p[pixel[11]] < c_b)
                 if(p[pixel[12]] < c_b)
                  if(p[pixel[13]] < c_b)
                   {}
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
             else
              if(p[pixel[10]] < c_b)
               if(p[pixel[11]] < c_b)
                if(p[pixel[12]] < c_b)
                 if(p[pixel[13]] < c_b)
                  if(p[pixel[14]] < c_b)
                   {}
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
            else
             if(p[pixel[10]] < c_b)
              if(p[pixel[11]] < c_b)
               if(p[pixel[12]] < c_b)
                if(p[pixel[13]] < c_b)
                 if(p[pixel[14]] < c_b)
                  if(p[pixel[15]] < c_b)
                   {}
                  else
                   continue;
                 else
                  continue;
                else
                 continue;
               else
                continue;
              else
               continue;
             else
              continue;
           else
            continue;
          else
           continue;
         else
          continue;
      }
			
      corners.push_back(xy{x,y});				
		}
	
	return corners;

}

#define Compare(X, Y) ((X)>=(Y))

// Slightly modified to use std::vector for some of the arrays.
std::vector<cv::KeyPoint> nonmax_suppression(const std::vector<xy> corners, const std::vector<int> scores)
{
    int num_corners = corners.size();
	int num_nonmax=0;
	int last_row;
	int* row_start;
	int i, j;
	std::vector<cv::KeyPoint> nonmax_keypoints;
	const int sz = (int)num_corners; 

	/*Point above points (roughly) to the pixel above the one of interest, if there
    is a feature there.*/
	int point_above = 0;
	int point_below = 0;

	
	if(num_corners < 1)
		return std::vector<cv::KeyPoint>();
	

	/* Find where each row begins
	   (the corners are output in raster scan order). A beginning of -1 signifies
	   that there are no corners on that row. */
	last_row = corners[num_corners-1].y;
	row_start = (int*)malloc((last_row+1)*sizeof(int));

	for(i=0; i < last_row+1; i++)
		row_start[i] = -1;
	
	{
		int prev_row = -1;
		for(i=0; i< num_corners; i++)
			if(corners[i].y != prev_row)
			{
				row_start[corners[i].y] = i;
				prev_row = corners[i].y;
			}
	}
	
	
	
	for(i=0; i < sz; i++)
	{
		int score = scores[i];
		xy pos = corners[i];
			
		/*Check left */
		if(i > 0)
			if(corners[i-1].x == pos.x-1 && corners[i-1].y == pos.y && Compare(scores[i-1], score))
				continue;
			
		/*Check right*/
		if(i < (sz - 1))
			if(corners[i+1].x == pos.x+1 && corners[i+1].y == pos.y && Compare(scores[i+1], score))
				continue;
			
		/*Check above (if there is a valid row above)*/
		if(pos.y != 0 && row_start[pos.y - 1] != -1) 
		{
			/*Make sure that current point_above is one
			  row above.*/
			if(corners[point_above].y < pos.y - 1)
				point_above = row_start[pos.y-1];
			
			/*Make point_above point to the first of the pixels above the current point,
			  if it exists.*/
			for(; corners[point_above].y < pos.y && corners[point_above].x < pos.x - 1; point_above++)
			{}
			
			
			for(j=point_above; corners[j].y < pos.y && corners[j].x <= pos.x + 1; j++)
			{
				int x = corners[j].x;
				if( (x == pos.x - 1 || x ==pos.x || x == pos.x+1) && Compare(scores[j], score))
					goto cont;
			}
			
		}
			
		/*Check below (if there is anything below)*/
		if(pos.y != last_row && row_start[pos.y + 1] != -1 && point_below < sz) /*Nothing below*/
		{
			if(corners[point_below].y < pos.y + 1)
				point_below = row_start[pos.y+1];
			
			/* Make point below point to one of the pixels belowthe current point, if it
			   exists.*/
			for(; point_below < sz && corners[point_below].y == pos.y+1 && corners[point_below].x < pos.x - 1; point_below++)
			{}

			for(j=point_below; j < sz && corners[j].y == pos.y+1 && corners[j].x <= pos.x + 1; j++)
			{
				int x = corners[j].x;
				if( (x == pos.x - 1 || x ==pos.x || x == pos.x+1) && Compare(scores[j],score))
					goto cont;
			}
		}
		
		nonmax_keypoints.push_back(cv::KeyPoint(corners[i].x, corners[i].y, 7.f, -1, 1.f));
		cont:
			;
	}

	free(row_start);
	return nonmax_keypoints;
}



std::vector<cv::KeyPoint> fast9_detect_nonmax(const cv::Mat im, int b)
{

	std::vector<xy> corners = fast9_detect(im, b);
	std::vector<int> scores = fast9_score(im, corners, b);
	std::vector<cv::KeyPoint> keypoints = nonmax_suppression(corners, scores);

	return keypoints;
}