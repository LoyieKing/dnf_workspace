# update

`_ZN5MySQL6updateEPKcz`

`MySQL::update(char const*, ...)`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f4718` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f4718  _ZN5MySQL6updateEPKcz
#           MySQL::update(char const*, ...)
# range [0x083f4718, 0x083f4781]
083f4718 +0x00:  push   %ebp
083f4719 +0x01:  mov    %esp,%ebp
083f471b +0x03:  sub    $0x28,%esp
083f471e +0x06:  lea    0x10(%ebp),%eax
083f4721 +0x09:  mov    %eax,-0xc(%ebp)
083f4724 +0x0c:  mov    -0xc(%ebp),%eax
083f4727 +0x0f:  mov    0x8(%ebp),%edx
083f472a +0x12:  add    $0x1c,%edx
083f472d +0x15:  mov    %eax,0x8(%esp)
083f4731 +0x19:  mov    0xc(%ebp),%eax
083f4734 +0x1c:  mov    %eax,0x4(%esp)
083f4738 +0x20:  mov    %edx,(%esp)
083f473b +0x23:  call   0807d7d0 <_init+0xc8>
083f4740 +0x28:  mov    0x8(%ebp),%eax
083f4743 +0x2b:  mov    %eax,(%esp)
083f4746 +0x2e:  call   083f4782 <_ZN5MySQL9set_queryEv>  ; MySQL::set_query()
083f474b +0x33:  xor    $0x1,%eax
083f474e +0x36:  test   %al,%al
083f4750 +0x38:  je     083f4759 <+0x41>
083f4752 +0x3a:  mov    $0x3,%eax
083f4757 +0x3f:  jmp    083f477f <+0x67>
083f4759 +0x41:  movl   $0x1,0x4(%esp)
083f4761 +0x49:  mov    0x8(%ebp),%eax
083f4764 +0x4c:  mov    %eax,(%esp)
083f4767 +0x4f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083f476c +0x54:  xor    $0x1,%eax
083f476f +0x57:  test   %al,%al
083f4771 +0x59:  je     083f477a <+0x62>
083f4773 +0x5b:  mov    $0x5,%eax
083f4778 +0x60:  jmp    083f477f <+0x67>
083f477a +0x62:  mov    $0x0,%eax
083f477f +0x67:  leave
083f4780 +0x68:  ret
083f4781 +0x69:  nop
```

## 反编译 C

```c
// MySQL::update @ 0x83f4718

/* MySQL::update(char const*, ...) */

undefined4 __thiscall MySQL::update(MySQL *this,char *param_1,...)

{
  char cVar1;
  undefined4 uVar2;
  
  vsprintf((char *)(this + 0x1c),param_1,&stack0x0000000c);
  cVar1 = set_query(this);
  if (cVar1 == '\x01') {
    cVar1 = exec(this,true);
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = 5;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}
```
