/* { dg-do compile } */
/* { dg-skip-if "do not override -mcpu" { *-*-* } { "-mcpu=*" } { "-mcpu=arm7tdmi" } } */
/* { dg-options "-Os -mbig-endian -mcpu=arm7tdmi" } */

enum { NILFS_SEGMENT_USAGE_ACTIVE, NILFS_SEGMENT_USAGE_DIRTY } a;

void fn2 (long long);

void fn1() {
  int b = a & 1 << NILFS_SEGMENT_USAGE_DIRTY;
  fn2 (b ? (long long) -1 : 0);
}
