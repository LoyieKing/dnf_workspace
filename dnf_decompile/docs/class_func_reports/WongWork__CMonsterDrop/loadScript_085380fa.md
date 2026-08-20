# loadScript

`_ZN8WongWork12CMonsterDrop10loadScriptEPKcS2_S2_`

`WongWork::CMonsterDrop::loadScript(char const*, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CMonsterDrop` | `0x085380fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085380fa  _ZN8WongWork12CMonsterDrop10loadScriptEPKcS2_S2_
#           WongWork::CMonsterDrop::loadScript(char const*, char const*, char const*)
# range [0x085380fa, 0x08538189]
085380fa +0x00:  push   %ebp
085380fb +0x01:  mov    %esp,%ebp
085380fd +0x03:  sub    $0x28,%esp
08538100 +0x06:  mov    0x8(%ebp),%eax
08538103 +0x09:  mov    (%eax),%eax
08538105 +0x0b:  add    $0x4,%eax
08538108 +0x0e:  mov    (%eax),%edx
0853810a +0x10:  mov    0xc(%ebp),%eax
0853810d +0x13:  mov    %eax,0x4(%esp)
08538111 +0x17:  mov    0x8(%ebp),%eax
08538114 +0x1a:  mov    %eax,(%esp)
08538117 +0x1d:  call   *%edx
08538119 +0x1f:  test   %eax,%eax
0853811b +0x21:  setne  %al
0853811e +0x24:  test   %al,%al
08538120 +0x26:  je     08538129 <+0x2f>
08538122 +0x28:  mov    $0x715,%eax
08538127 +0x2d:  jmp    08538187 <+0x8d>
08538129 +0x2f:  movl   $0x0,-0xc(%ebp)
08538130 +0x36:  mov    0x8(%ebp),%eax
08538133 +0x39:  lea    &_ZL14gUnicodeBuffer+0x19380(%eax),%edx
08538139 +0x3f:  mov    0x10(%ebp),%eax
0853813c +0x42:  mov    %eax,0x4(%esp)
08538140 +0x46:  mov    %edx,(%esp)
08538143 +0x49:  call   08535344 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc>  ; WongWork::CMonsterDrop_Hell::loadScript(char const*)
08538148 +0x4e:  mov    %eax,-0xc(%ebp)
0853814b +0x51:  cmpl   $0x0,-0xc(%ebp)
0853814f +0x55:  je     08538156 <+0x5c>
08538151 +0x57:  mov    -0xc(%ebp),%eax
08538154 +0x5a:  jmp    08538187 <+0x8d>
08538156 +0x5c:  cmpl   $0x0,0x14(%ebp)
0853815a +0x60:  je     08538182 <+0x88>
0853815c +0x62:  mov    0x8(%ebp),%eax
0853815f +0x65:  lea    0x4706c(%eax),%edx
08538165 +0x6b:  mov    0x14(%ebp),%eax
08538168 +0x6e:  mov    %eax,0x4(%esp)
0853816c +0x72:  mov    %edx,(%esp)
0853816f +0x75:  call   085373ee <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc>  ; WongWork::CSpecialMonsterDrop::loadScript(char const*)
08538174 +0x7a:  mov    %eax,-0xc(%ebp)
08538177 +0x7d:  cmpl   $0x0,-0xc(%ebp)
0853817b +0x81:  je     08538182 <+0x88>
0853817d +0x83:  mov    -0xc(%ebp),%eax
08538180 +0x86:  jmp    08538187 <+0x8d>
08538182 +0x88:  mov    $0x0,%eax
08538187 +0x8d:  leave
08538188 +0x8e:  ret
08538189 +0x8f:  nop
```

## 反编译 C

```c
// WongWork::CMonsterDrop::loadScript @ 0x85380fa

/* WongWork::CMonsterDrop::loadScript(char const*, char const*, char const*) */

int __thiscall
WongWork::CMonsterDrop::loadScript(CMonsterDrop *this,char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 4))(this,param_1);
  if (iVar1 == 0) {
    iVar1 = CMonsterDrop_Hell::loadScript((CMonsterDrop_Hell *)(this + 0x238ac),param_2);
    if ((iVar1 == 0) &&
       ((param_3 == (char *)0x0 ||
        (iVar1 = CSpecialMonsterDrop::loadScript((CSpecialMonsterDrop *)(this + 0x4706c),param_3),
        iVar1 == 0)))) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x715;
  }
  return iVar1;
}
```
