# ObfuscatePacket

`_ZN11CObfuscator15ObfuscatePacketEPhii`

`CObfuscator::ObfuscatePacket(unsigned char*, int, int)`

| 类 | 地址 |
|---|---|
| `CObfuscator` | `0x085858ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085858ea  _ZN11CObfuscator15ObfuscatePacketEPhii
#           CObfuscator::ObfuscatePacket(unsigned char*, int, int)
# range [0x085858ea, 0x08585937]
085858ea +0x00:  push   %ebp
085858eb +0x01:  mov    %esp,%ebp
085858ed +0x03:  sub    $0x18,%esp
085858f0 +0x06:  mov    0x8(%ebp),%eax
085858f3 +0x09:  mov    0x10(%ebp),%edx
085858f6 +0x0c:  mov    %edx,0x8(%esp)
085858fa +0x10:  mov    0xc(%ebp),%edx
085858fd +0x13:  mov    %edx,0x4(%esp)
08585901 +0x17:  mov    %eax,(%esp)
08585904 +0x1a:  call   0831c116 <_ZN11CBitManager8ReadDataEPhi>  ; CBitManager::ReadData(unsigned char*, int)
08585909 +0x1f:  mov    0x14(%ebp),%eax
0858590c +0x22:  cmp    $0x1,%eax
0858590f +0x25:  je     08585918 <+0x2e>
08585911 +0x27:  cmp    $0x2,%eax
08585914 +0x2a:  je     08585925 <+0x3b>
08585916 +0x2c:  jmp    08585930 <+0x46>
08585918 +0x2e:  mov    0x8(%ebp),%eax
0858591b +0x31:  mov    %eax,(%esp)
0858591e +0x34:  call   08585986 <_ZN11CObfuscator10Obfuscate1Ev>  ; CObfuscator::Obfuscate1()
08585923 +0x39:  jmp    08585930 <+0x46>
08585925 +0x3b:  mov    0x8(%ebp),%eax
08585928 +0x3e:  mov    %eax,(%esp)
0858592b +0x41:  call   08585be4 <_ZN11CObfuscator10Obfuscate2Ev>  ; CObfuscator::Obfuscate2()
08585930 +0x46:  mov    0x8(%ebp),%eax
08585933 +0x49:  mov    0x4(%eax),%eax
08585936 +0x4c:  leave
08585937 +0x4d:  ret
```

## 反编译 C

```c
// CObfuscator::ObfuscatePacket @ 0x85858ea

/* CObfuscator::ObfuscatePacket(unsigned char*, int, int) */

undefined4 __thiscall
CObfuscator::ObfuscatePacket(CObfuscator *this,uchar *param_1,int param_2,int param_3)

{
  CBitManager::ReadData((CBitManager *)this,param_1,param_2);
  if (param_3 == 1) {
    Obfuscate1(this);
  }
  else if (param_3 == 2) {
    Obfuscate2(this);
  }
  return *(undefined4 *)(this + 4);
}
```
