# DeobfuscatePacket

`_ZN11CObfuscator17DeobfuscatePacketEPhii`

`CObfuscator::DeobfuscatePacket(unsigned char*, int, int)`

| 类 | 地址 |
|---|---|
| `CObfuscator` | `0x08585938` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08585938  _ZN11CObfuscator17DeobfuscatePacketEPhii
#           CObfuscator::DeobfuscatePacket(unsigned char*, int, int)
# range [0x08585938, 0x08585985]
08585938 +0x00:  push   %ebp
08585939 +0x01:  mov    %esp,%ebp
0858593b +0x03:  sub    $0x18,%esp
0858593e +0x06:  mov    0x8(%ebp),%eax
08585941 +0x09:  mov    0x10(%ebp),%edx
08585944 +0x0c:  mov    %edx,0x8(%esp)
08585948 +0x10:  mov    0xc(%ebp),%edx
0858594b +0x13:  mov    %edx,0x4(%esp)
0858594f +0x17:  mov    %eax,(%esp)
08585952 +0x1a:  call   0831c116 <_ZN11CBitManager8ReadDataEPhi>  ; CBitManager::ReadData(unsigned char*, int)
08585957 +0x1f:  mov    0x14(%ebp),%eax
0858595a +0x22:  cmp    $0x1,%eax
0858595d +0x25:  je     08585966 <+0x2e>
0858595f +0x27:  cmp    $0x2,%eax
08585962 +0x2a:  je     08585973 <+0x3b>
08585964 +0x2c:  jmp    0858597e <+0x46>
08585966 +0x2e:  mov    0x8(%ebp),%eax
08585969 +0x31:  mov    %eax,(%esp)
0858596c +0x34:  call   08585aaa <_ZN11CObfuscator12Deobfuscate1Ev>  ; CObfuscator::Deobfuscate1()
08585971 +0x39:  jmp    0858597e <+0x46>
08585973 +0x3b:  mov    0x8(%ebp),%eax
08585976 +0x3e:  mov    %eax,(%esp)
08585979 +0x41:  call   08585d2e <_ZN11CObfuscator12Deobfuscate2Ev>  ; CObfuscator::Deobfuscate2()
0858597e +0x46:  mov    0x8(%ebp),%eax
08585981 +0x49:  mov    0x4(%eax),%eax
08585984 +0x4c:  leave
08585985 +0x4d:  ret
```

## 反编译 C

```c
// CObfuscator::DeobfuscatePacket @ 0x8585938

/* CObfuscator::DeobfuscatePacket(unsigned char*, int, int) */

undefined4 __thiscall
CObfuscator::DeobfuscatePacket(CObfuscator *this,uchar *param_1,int param_2,int param_3)

{
  CBitManager::ReadData((CBitManager *)this,param_1,param_2);
  if (param_3 == 1) {
    Deobfuscate1(this);
  }
  else if (param_3 == 2) {
    Deobfuscate2(this);
  }
  return *(undefined4 *)(this + 4);
}
```
