# init_db_handle

`_ZN5MySQL14init_db_handleEv`

`MySQL::init_db_handle()`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f3c16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f3c16  _ZN5MySQL14init_db_handleEv
#           MySQL::init_db_handle()
# range [0x083f3c16, 0x083f3ce3]
083f3c16 +0x00:  push   %ebp
083f3c17 +0x01:  mov    %esp,%ebp
083f3c19 +0x03:  sub    $0x38,%esp
083f3c1c +0x06:  mov    0x8(%ebp),%eax
083f3c1f +0x09:  mov    0x4(%eax),%eax
083f3c22 +0x0c:  test   %eax,%eax
083f3c24 +0x0e:  je     083f3c73 <+0x5d>
083f3c26 +0x10:  movl   $0x5,0xc(%esp)
083f3c2e +0x18:  movl   $0x81,0x8(%esp)
083f3c36 +0x20:  movl   $&_ZZN5MySQL14init_db_handleEvE19__PRETTY_FUNCTION__,0x4(%esp)
083f3c3e +0x28:  lea    -0x28(%ebp),%eax
083f3c41 +0x2b:  mov    %eax,(%esp)
083f3c44 +0x2e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083f3c49 +0x33:  movl   $0x81,0xc(%esp)
083f3c51 +0x3b:  movl   $&_ZZN5MySQL14init_db_handleEvE19__PRETTY_FUNCTION__,0x8(%esp)
083f3c59 +0x43:  movl   $"[%s][%d]",0x4(%esp)
083f3c61 +0x4b:  lea    -0x28(%ebp),%eax
083f3c64 +0x4e:  mov    %eax,(%esp)
083f3c67 +0x51:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083f3c6c +0x56:  mov    $0x0,%eax
083f3c71 +0x5b:  jmp    083f3ce1 <+0xcb>
083f3c73 +0x5d:  movl   $0x0,(%esp)
083f3c7a +0x64:  call   08735580 <mysql_init>
083f3c7f +0x69:  mov    0x8(%ebp),%edx
083f3c82 +0x6c:  mov    %eax,0x4(%edx)
083f3c85 +0x6f:  mov    0x8(%ebp),%eax
083f3c88 +0x72:  mov    0x4(%eax),%eax
083f3c8b +0x75:  test   %eax,%eax
083f3c8d +0x77:  jne    083f3cdc <+0xc6>
083f3c8f +0x79:  movl   $0x5,0xc(%esp)
083f3c97 +0x81:  movl   $0x8c,0x8(%esp)
083f3c9f +0x89:  movl   $&_ZZN5MySQL14init_db_handleEvE19__PRETTY_FUNCTION__,0x4(%esp)
083f3ca7 +0x91:  lea    -0x18(%ebp),%eax
083f3caa +0x94:  mov    %eax,(%esp)
083f3cad +0x97:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083f3cb2 +0x9c:  movl   $0x8c,0xc(%esp)
083f3cba +0xa4:  movl   $&_ZZN5MySQL14init_db_handleEvE19__PRETTY_FUNCTION__,0x8(%esp)
083f3cc2 +0xac:  movl   $"[%s][%d]",0x4(%esp)
083f3cca +0xb4:  lea    -0x18(%ebp),%eax
083f3ccd +0xb7:  mov    %eax,(%esp)
083f3cd0 +0xba:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083f3cd5 +0xbf:  mov    $0x0,%eax
083f3cda +0xc4:  jmp    083f3ce1 <+0xcb>
083f3cdc +0xc6:  mov    $0x1,%eax
083f3ce1 +0xcb:  leave
083f3ce2 +0xcc:  ret
083f3ce3 +0xcd:  nop
```

## 反编译 C

```c
// MySQL::init_db_handle @ 0x83f3c16

/* MySQL::init_db_handle() */

undefined4 __thiscall MySQL::init_db_handle(MySQL *this)

{
  undefined4 uVar1;
  cMyTrace local_2c [16];
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 4) == 0) {
    uVar1 = mysql_init(0);
    *(undefined4 *)(this + 4) = uVar1;
    if (*(int *)(this + 4) == 0) {
      cMyTrace::cMyTrace(local_1c,"bool MySQL::init_db_handle()",0x8c,5);
      cMyTrace::operator()(local_1c,"[%s][%d]","bool MySQL::init_db_handle()",0x8c);
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    cMyTrace::cMyTrace(local_2c,"bool MySQL::init_db_handle()",0x81,5);
    cMyTrace::operator()(local_2c,"[%s][%d]","bool MySQL::init_db_handle()",0x81);
    uVar1 = 0;
  }
  return uVar1;
}
```
