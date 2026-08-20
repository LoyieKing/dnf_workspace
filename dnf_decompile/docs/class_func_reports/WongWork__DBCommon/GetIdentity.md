# GetIdentity

`_ZN8WongWork8DBCommon11GetIdentityEP5MySQL`

`WongWork::DBCommon::GetIdentity(MySQL*)`

| 类 | 地址 |
|---|---|
| `WongWork::DBCommon` | `0x083f9ad4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f9ad4  _ZN8WongWork8DBCommon11GetIdentityEP5MySQL
#           WongWork::DBCommon::GetIdentity(MySQL*)
# range [0x083f9ad4, 0x083f9b53]
083f9ad4 +0x00:  push   %ebp
083f9ad5 +0x01:  mov    %esp,%ebp
083f9ad7 +0x03:  sub    $0x28,%esp
083f9ada +0x06:  movl   $"seLect @@identity",0x4(%esp)
083f9ae2 +0x0e:  mov    0x8(%ebp),%eax
083f9ae5 +0x11:  mov    %eax,(%esp)
083f9ae8 +0x14:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083f9aed +0x19:  movl   $0x1,0x4(%esp)
083f9af5 +0x21:  mov    0x8(%ebp),%eax
083f9af8 +0x24:  mov    %eax,(%esp)
083f9afb +0x27:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083f9b00 +0x2c:  xor    $0x1,%eax
083f9b03 +0x2f:  test   %al,%al
083f9b05 +0x31:  je     083f9b0e <+0x3a>
083f9b07 +0x33:  mov    $0x0,%eax
083f9b0c +0x38:  jmp    083f9b52 <+0x7e>
083f9b0e +0x3a:  mov    0x8(%ebp),%eax
083f9b11 +0x3d:  mov    %eax,(%esp)
083f9b14 +0x40:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
083f9b19 +0x45:  xor    $0x1,%eax
083f9b1c +0x48:  test   %al,%al
083f9b1e +0x4a:  je     083f9b27 <+0x53>
083f9b20 +0x4c:  mov    $0x0,%eax
083f9b25 +0x51:  jmp    083f9b52 <+0x7e>
083f9b27 +0x53:  lea    -0xc(%ebp),%eax
083f9b2a +0x56:  mov    %eax,0x8(%esp)
083f9b2e +0x5a:  movl   $0x0,0x4(%esp)
083f9b36 +0x62:  mov    0x8(%ebp),%eax
083f9b39 +0x65:  mov    %eax,(%esp)
083f9b3c +0x68:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
083f9b41 +0x6d:  xor    $0x1,%eax
083f9b44 +0x70:  test   %al,%al
083f9b46 +0x72:  je     083f9b4f <+0x7b>
083f9b48 +0x74:  mov    $0x0,%eax
083f9b4d +0x79:  jmp    083f9b52 <+0x7e>
083f9b4f +0x7b:  mov    -0xc(%ebp),%eax
083f9b52 +0x7e:  leave
083f9b53 +0x7f:  ret
```

## 反编译 C

```c
// WongWork::DBCommon::GetIdentity @ 0x83f9ad4

/* WongWork::DBCommon::GetIdentity(MySQL*) */

uint WongWork::DBCommon::GetIdentity(MySQL *param_1)

{
  char cVar1;
  uint local_10 [3];
  
  MySQL::set_query(param_1,"seLect @@identity");
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(param_1);
    if (cVar1 == '\x01') {
      cVar1 = MySQL::get_uint(param_1,0,local_10);
      if (cVar1 != '\x01') {
        local_10[0] = 0;
      }
    }
    else {
      local_10[0] = 0;
    }
  }
  else {
    local_10[0] = 0;
  }
  return local_10[0];
}
```
