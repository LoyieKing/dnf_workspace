# Initialize

`_ZN4CTEA10InitializeEPKciS1_ii`

`CTEA::Initialize(char const*, int, char const*, int, int)`

| 类 | 地址 |
|---|---|
| `CTEA` | `0x080c339c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c339c  _ZN4CTEA10InitializeEPKciS1_ii
#           CTEA::Initialize(char const*, int, char const*, int, int)
# range [0x080c339c, 0x080c35a7]
080c339c +0x000:  push   %ebp
080c339d +0x001:  mov    %esp,%ebp
080c339f +0x003:  sub    $0x38,%esp
080c33a2 +0x006:  cmpl   $0x0,0xc(%ebp)
080c33a6 +0x00a:  jne    080c33b2 <+0x16>
080c33a8 +0x00c:  mov    $0x70000001,%eax
080c33ad +0x011:  jmp    080c35a6 <+0x20a>
080c33b2 +0x016:  cmpl   $0x0,0x10(%ebp)
080c33b6 +0x01a:  jg     080c33c2 <+0x26>
080c33b8 +0x01c:  mov    $0x70000002,%eax
080c33bd +0x021:  jmp    080c35a6 <+0x20a>
080c33c2 +0x026:  cmpl   $0x0,0x18(%ebp)
080c33c6 +0x02a:  js     080c33ce <+0x32>
080c33c8 +0x02c:  cmpl   $0x2,0x18(%ebp)
080c33cc +0x030:  jle    080c33d8 <+0x3c>
080c33ce +0x032:  mov    $0x70000003,%eax
080c33d3 +0x037:  jmp    080c35a6 <+0x20a>
080c33d8 +0x03c:  cmpl   $0x0,0x1c(%ebp)
080c33dc +0x040:  js     080c33e4 <+0x48>
080c33de +0x042:  cmpl   $0x2,0x1c(%ebp)
080c33e2 +0x046:  jle    080c33ee <+0x52>
080c33e4 +0x048:  mov    $0x70000004,%eax
080c33e9 +0x04d:  jmp    080c35a6 <+0x20a>
080c33ee +0x052:  mov    0x8(%ebp),%eax
080c33f1 +0x055:  mov    0x18(%ebp),%edx
080c33f4 +0x058:  mov    %edx,0x10(%eax)
080c33f7 +0x05b:  mov    0x8(%ebp),%eax
080c33fa +0x05e:  mov    0x1c(%ebp),%edx
080c33fd +0x061:  mov    %edx,0x14(%eax)
080c3400 +0x064:  movl   $0x0,-0x14(%ebp)
080c3407 +0x06b:  movl   $0x0,-0x10(%ebp)
080c340e +0x072:  jmp    080c3435 <+0x99>
080c3410 +0x074:  mov    -0x14(%ebp),%eax
080c3413 +0x077:  mov    -0x10(%ebp),%edx
080c3416 +0x07a:  add    0xc(%ebp),%edx
080c3419 +0x07d:  movzbl (%edx),%edx
080c341c +0x080:  mov    %dl,-0x24(%ebp,%eax,1)
080c3420 +0x084:  addl   $0x1,-0x14(%ebp)
080c3424 +0x088:  mov    -0x10(%ebp),%eax
080c3427 +0x08b:  add    $0x1,%eax
080c342a +0x08e:  mov    %eax,%edx
080c342c +0x090:  sar    $0x1f,%edx
080c342f +0x093:  idivl  0x10(%ebp)
080c3432 +0x096:  mov    %edx,-0x10(%ebp)
080c3435 +0x099:  mov    0x8(%ebp),%eax
080c3438 +0x09c:  mov    0xc(%eax),%eax
080c343b +0x09f:  cmp    -0x14(%ebp),%eax
080c343e +0x0a2:  setg   %al
080c3441 +0x0a5:  test   %al,%al
080c3443 +0x0a7:  jne    080c3410 <+0x74>
080c3445 +0x0a9:  movb   $0x0,-0xa(%ebp)
080c3449 +0x0ad:  movb   $0x0,-0x9(%ebp)
080c344d +0x0b1:  mov    0x8(%ebp),%eax
080c3450 +0x0b4:  movzbl 0x4(%eax),%eax
080c3454 +0x0b8:  test   %al,%al
080c3456 +0x0ba:  je     080c34a6 <+0x10a>
080c3458 +0x0bc:  mov    0x8(%ebp),%eax
080c345b +0x0bf:  mov    0x8(%eax),%eax
080c345e +0x0c2:  mov    0x8(%ebp),%edx
080c3461 +0x0c5:  add    $0x38,%edx
080c3464 +0x0c8:  mov    %eax,0x8(%esp)
080c3468 +0x0cc:  mov    0x14(%ebp),%eax
080c346b +0x0cf:  mov    %eax,0x4(%esp)
080c346f +0x0d3:  mov    %edx,(%esp)
080c3472 +0x0d6:  call   0807dc90 <_init+0x588>
080c3477 +0x0db:  test   %eax,%eax
080c3479 +0x0dd:  jne    080c347f <+0xe3>
080c347b +0x0df:  movb   $0x1,-0x9(%ebp)
080c347f +0x0e3:  mov    0x8(%ebp),%eax
080c3482 +0x0e6:  mov    0xc(%eax),%eax
080c3485 +0x0e9:  mov    0x8(%ebp),%edx
080c3488 +0x0ec:  add    $0x18,%edx
080c348b +0x0ef:  mov    %eax,0x8(%esp)
080c348f +0x0f3:  lea    -0x24(%ebp),%eax
080c3492 +0x0f6:  mov    %eax,0x4(%esp)
080c3496 +0x0fa:  mov    %edx,(%esp)
080c3499 +0x0fd:  call   0807dc90 <_init+0x588>
080c349e +0x102:  test   %eax,%eax
080c34a0 +0x104:  jne    080c34a6 <+0x10a>
080c34a2 +0x106:  movb   $0x1,-0xa(%ebp)
080c34a6 +0x10a:  cmpb   $0x0,-0x9(%ebp)
080c34aa +0x10e:  je     080c34d0 <+0x134>
080c34ac +0x110:  mov    0x8(%ebp),%eax
080c34af +0x113:  mov    0x8(%eax),%eax
080c34b2 +0x116:  mov    0x8(%ebp),%edx
080c34b5 +0x119:  lea    0x38(%edx),%ecx
080c34b8 +0x11c:  mov    0x8(%ebp),%edx
080c34bb +0x11f:  add    $0x40,%edx
080c34be +0x122:  mov    %eax,0x8(%esp)
080c34c2 +0x126:  mov    %ecx,0x4(%esp)
080c34c6 +0x12a:  mov    %edx,(%esp)
080c34c9 +0x12d:  call   0807d8a0 <_init+0x198>
080c34ce +0x132:  jmp    080c350e <+0x172>
080c34d0 +0x134:  mov    0x8(%ebp),%eax
080c34d3 +0x137:  mov    0x8(%eax),%eax
080c34d6 +0x13a:  mov    0x8(%ebp),%edx
080c34d9 +0x13d:  add    $0x38,%edx
080c34dc +0x140:  mov    %eax,0x8(%esp)
080c34e0 +0x144:  mov    0x14(%ebp),%eax
080c34e3 +0x147:  mov    %eax,0x4(%esp)
080c34e7 +0x14b:  mov    %edx,(%esp)
080c34ea +0x14e:  call   0807d8a0 <_init+0x198>
080c34ef +0x153:  mov    0x8(%ebp),%eax
080c34f2 +0x156:  mov    0x8(%eax),%eax
080c34f5 +0x159:  mov    0x8(%ebp),%edx
080c34f8 +0x15c:  add    $0x40,%edx
080c34fb +0x15f:  mov    %eax,0x8(%esp)
080c34ff +0x163:  mov    0x14(%ebp),%eax
080c3502 +0x166:  mov    %eax,0x4(%esp)
080c3506 +0x16a:  mov    %edx,(%esp)
080c3509 +0x16d:  call   0807d8a0 <_init+0x198>
080c350e +0x172:  cmpb   $0x0,-0xa(%ebp)
080c3512 +0x176:  je     080c351e <+0x182>
080c3514 +0x178:  mov    $0x6fffffff,%eax
080c3519 +0x17d:  jmp    080c35a6 <+0x20a>
080c351e +0x182:  mov    0x8(%ebp),%eax
080c3521 +0x185:  mov    0xc(%eax),%eax
080c3524 +0x188:  mov    0x8(%ebp),%edx
080c3527 +0x18b:  add    $0x18,%edx
080c352a +0x18e:  mov    %eax,0x8(%esp)
080c352e +0x192:  lea    -0x24(%ebp),%eax
080c3531 +0x195:  mov    %eax,0x4(%esp)
080c3535 +0x199:  mov    %edx,(%esp)
080c3538 +0x19c:  call   0807d8a0 <_init+0x198>
080c353d +0x1a1:  mov    0x8(%ebp),%eax
080c3540 +0x1a4:  lea    0x28(%eax),%edx
080c3543 +0x1a7:  lea    -0x24(%ebp),%eax
080c3546 +0x1aa:  mov    %edx,0x4(%esp)
080c354a +0x1ae:  mov    %eax,(%esp)
080c354d +0x1b1:  call   080b459e <_ZN7IMethod11BytesToWordEPKhRj>  ; IMethod::BytesToWord(unsigned char const*, unsigned int&)
080c3552 +0x1b6:  mov    0x8(%ebp),%eax
080c3555 +0x1b9:  lea    0x2c(%eax),%edx
080c3558 +0x1bc:  lea    -0x24(%ebp),%eax
080c355b +0x1bf:  add    $0x4,%eax
080c355e +0x1c2:  mov    %edx,0x4(%esp)
080c3562 +0x1c6:  mov    %eax,(%esp)
080c3565 +0x1c9:  call   080b459e <_ZN7IMethod11BytesToWordEPKhRj>  ; IMethod::BytesToWord(unsigned char const*, unsigned int&)
080c356a +0x1ce:  mov    0x8(%ebp),%eax
080c356d +0x1d1:  lea    0x30(%eax),%edx
080c3570 +0x1d4:  lea    -0x24(%ebp),%eax
080c3573 +0x1d7:  add    $0x8,%eax
080c3576 +0x1da:  mov    %edx,0x4(%esp)
080c357a +0x1de:  mov    %eax,(%esp)
080c357d +0x1e1:  call   080b459e <_ZN7IMethod11BytesToWordEPKhRj>  ; IMethod::BytesToWord(unsigned char const*, unsigned int&)
080c3582 +0x1e6:  mov    0x8(%ebp),%eax
080c3585 +0x1e9:  lea    0x34(%eax),%edx
080c3588 +0x1ec:  lea    -0x24(%ebp),%eax
080c358b +0x1ef:  add    $0xc,%eax
080c358e +0x1f2:  mov    %edx,0x4(%esp)
080c3592 +0x1f6:  mov    %eax,(%esp)
080c3595 +0x1f9:  call   080b459e <_ZN7IMethod11BytesToWordEPKhRj>  ; IMethod::BytesToWord(unsigned char const*, unsigned int&)
080c359a +0x1fe:  mov    0x8(%ebp),%eax
080c359d +0x201:  movb   $0x1,0x4(%eax)
080c35a1 +0x205:  mov    $0x6fffffff,%eax
080c35a6 +0x20a:  leave
080c35a7 +0x20b:  ret
```

## 反编译 C

```c
// CTEA::Initialize @ 0x80c339c

/* CTEA::Initialize(char const*, int, char const*, int, int) */

undefined4 __thiscall
CTEA::Initialize(CTEA *this,char *param_1,int param_2,char *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  uchar local_28 [4];
  uchar auStack_24 [4];
  uchar auStack_20 [4];
  uchar auStack_1c [4];
  int local_18;
  int local_14;
  char local_e;
  char local_d;
  
  if (param_1 == (char *)0x0) {
    uVar1 = 0x70000001;
  }
  else if (param_2 < 1) {
    uVar1 = 0x70000002;
  }
  else if ((param_4 < 0) || (2 < param_4)) {
    uVar1 = 0x70000003;
  }
  else if ((param_5 < 0) || (2 < param_5)) {
    uVar1 = 0x70000004;
  }
  else {
    *(int *)(this + 0x10) = param_4;
    *(int *)(this + 0x14) = param_5;
    local_14 = 0;
    for (local_18 = 0; local_18 < *(int *)(this + 0xc); local_18 = local_18 + 1) {
      local_28[local_18] = param_1[local_14];
      local_14 = (local_14 + 1) % param_2;
    }
    local_e = '\0';
    local_d = '\0';
    if (this[4] != (CTEA)0x0) {
      iVar2 = memcmp(this + 0x38,param_3,*(size_t *)(this + 8));
      if (iVar2 == 0) {
        local_d = '\x01';
      }
      iVar2 = memcmp(this + 0x18,local_28,*(size_t *)(this + 0xc));
      if (iVar2 == 0) {
        local_e = '\x01';
      }
    }
    if (local_d == '\0') {
      memcpy(this + 0x38,param_3,*(size_t *)(this + 8));
      memcpy(this + 0x40,param_3,*(size_t *)(this + 8));
    }
    else {
      memcpy(this + 0x40,this + 0x38,*(size_t *)(this + 8));
    }
    if (local_e == '\0') {
      memcpy(this + 0x18,local_28,*(size_t *)(this + 0xc));
      IMethod::BytesToWord(local_28,(uint *)(this + 0x28));
      IMethod::BytesToWord(auStack_24,(uint *)(this + 0x2c));
      IMethod::BytesToWord(auStack_20,(uint *)(this + 0x30));
      IMethod::BytesToWord(auStack_1c,(uint *)(this + 0x34));
      this[4] = (CTEA)0x1;
      uVar1 = 0x6fffffff;
    }
    else {
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}
```
