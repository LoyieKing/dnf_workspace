# load

`_ZN12CEnvironment4loadEv`

`CEnvironment::load()`

| 类 | 地址 |
|---|---|
| `CEnvironment` | `0x08290450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08290450  _ZN12CEnvironment4loadEv
#           CEnvironment::load()
# range [0x08290450, 0x0829053f]
08290450 +0x00:  push   %ebp
08290451 +0x01:  mov    %esp,%ebp
08290453 +0x03:  sub    $0x448,%esp
08290459 +0x09:  movl   $0x22,0x8(%esp)
08290461 +0x11:  movl   $0x0,0x4(%esp)
08290469 +0x19:  lea    -0x32(%ebp),%eax
0829046c +0x1c:  mov    %eax,(%esp)
0829046f +0x1f:  call   0807dcc0 <_init+0x5b8>
08290474 +0x24:  mov    0x8(%ebp),%eax
08290477 +0x27:  mov    %eax,(%esp)
0829047a +0x2a:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
0829047f +0x2f:  mov    %eax,0x8(%esp)
08290483 +0x33:  movl   $"./cfg/%s.cfg",0x4(%esp)
0829048b +0x3b:  lea    -0x32(%ebp),%eax
0829048e +0x3e:  mov    %eax,(%esp)
08290491 +0x41:  call   0807e440 <_init+0xd38>
08290496 +0x46:  movl   $"rb",0x4(%esp)
0829049e +0x4e:  lea    -0x32(%ebp),%eax
082904a1 +0x51:  mov    %eax,(%esp)
082904a4 +0x54:  call   0807e770 <_init+0x1068>
082904a9 +0x59:  mov    %eax,-0x10(%ebp)
082904ac +0x5c:  cmpl   $0x0,-0x10(%ebp)
082904b0 +0x60:  jne    082904c0 <+0x70>
082904b2 +0x62:  mov    $0x0,%eax
082904b7 +0x67:  jmp    0829053e <+0xee>
082904bc +0x6c:  nop
082904bd +0x6d:  jmp    082904c0 <+0x70>
082904bf +0x6f:  nop
082904c0 +0x70:  lea    -0x432(%ebp),%eax
082904c6 +0x76:  mov    %eax,0x8(%esp)
082904ca +0x7a:  mov    -0x10(%ebp),%eax
082904cd +0x7d:  mov    %eax,0x4(%esp)
082904d1 +0x81:  mov    0x8(%ebp),%eax
082904d4 +0x84:  mov    %eax,(%esp)
082904d7 +0x87:  call   08290540 <_ZN12CEnvironment8fgetlineEP8_IO_FILEPc>  ; CEnvironment::fgetline(_IO_FILE*, char*)
082904dc +0x8c:  mov    %al,-0x9(%ebp)
082904df +0x8f:  movzbl -0x9(%ebp),%eax
082904e3 +0x93:  xor    $0x1,%eax
082904e6 +0x96:  test   %al,%al
082904e8 +0x98:  jne    0829052d <+0xdd>
082904ea +0x9a:  lea    -0x432(%ebp),%eax
082904f0 +0xa0:  mov    %eax,0x4(%esp)
082904f4 +0xa4:  mov    0x8(%ebp),%eax
082904f7 +0xa7:  mov    %eax,(%esp)
082904fa +0xaa:  call   08290610 <_ZN12CEnvironment13check_commentEPc>  ; CEnvironment::check_comment(char*)
082904ff +0xaf:  xor    $0x1,%eax
08290502 +0xb2:  test   %al,%al
08290504 +0xb4:  je     082904bc <+0x6c>
08290506 +0xb6:  mov    0x8(%ebp),%eax
08290509 +0xb9:  mov    (%eax),%eax
0829050b +0xbb:  mov    (%eax),%edx
0829050d +0xbd:  lea    -0x432(%ebp),%eax
08290513 +0xc3:  mov    %eax,0x4(%esp)
08290517 +0xc7:  mov    0x8(%ebp),%eax
0829051a +0xca:  mov    %eax,(%esp)
0829051d +0xcd:  call   *%edx
0829051f +0xcf:  xor    $0x1,%eax
08290522 +0xd2:  test   %al,%al
08290524 +0xd4:  je     082904bf <+0x6f>
08290526 +0xd6:  mov    $0x0,%eax
0829052b +0xdb:  jmp    0829053e <+0xee>
0829052d +0xdd:  nop
0829052e +0xde:  mov    -0x10(%ebp),%eax
08290531 +0xe1:  mov    %eax,(%esp)
08290534 +0xe4:  call   0807dea0 <_init+0x798>
08290539 +0xe9:  mov    $0x1,%eax
0829053e +0xee:  leave
0829053f +0xef:  ret
```

## 反编译 C

```c
// CEnvironment::load @ 0x8290450

/* CEnvironment::load() */

undefined4 __thiscall CEnvironment::load(CEnvironment *this)

{
  char cVar1;
  undefined4 uVar2;
  char local_436 [1024];
  char local_36 [34];
  _IO_FILE *local_14;
  char local_d;
  
  memset(local_36,0,0x22);
  uVar2 = get_file_name(this);
  sprintf(local_36,"./cfg/%s.cfg",uVar2);
  local_14 = fopen(local_36,"rb");
  if (local_14 != (FILE *)0x0) {
    do {
      local_d = fgetline(this,local_14,local_436);
      if (local_d != '\x01') {
        fclose(local_14);
        return 1;
      }
      cVar1 = check_comment(this,local_436);
    } while ((cVar1 == '\x01') ||
            (cVar1 = (*(code *)**(undefined4 **)this)(this,local_436), cVar1 == '\x01'));
  }
  return 0;
}
```
