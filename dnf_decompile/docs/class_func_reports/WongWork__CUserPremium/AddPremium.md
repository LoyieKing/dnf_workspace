# AddPremium

`_ZN8WongWork12CUserPremium10AddPremiumEiiii`

`WongWork::CUserPremium::AddPremium(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CUserPremium` | `0x086adad2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086adad2  _ZN8WongWork12CUserPremium10AddPremiumEiiii
#           WongWork::CUserPremium::AddPremium(int, int, int, int)
# range [0x086adad2, 0x086adba5]
086adad2 +0x00:  push   %ebp
086adad3 +0x01:  mov    %esp,%ebp
086adad5 +0x03:  sub    $0x18,%esp
086adad8 +0x06:  mov    0xc(%ebp),%edx
086adadb +0x09:  mov    0x8(%ebp),%ecx
086adade +0x0c:  mov    %edx,%eax
086adae0 +0x0e:  shl    $0x2,%eax
086adae3 +0x11:  add    %edx,%eax
086adae5 +0x13:  shl    $0x2,%eax
086adae8 +0x16:  mov    (%eax,%ecx,1),%eax
086adaeb +0x19:  test   %eax,%eax
086adaed +0x1b:  je     086adb01 <+0x2f>
086adaef +0x1d:  mov    0xc(%ebp),%eax
086adaf2 +0x20:  mov    %eax,0x4(%esp)
086adaf6 +0x24:  mov    0x8(%ebp),%eax
086adaf9 +0x27:  mov    %eax,(%esp)
086adafc +0x2a:  call   086adba6 <_ZN8WongWork12CUserPremium13RemovePremiumEi>  ; WongWork::CUserPremium::RemovePremium(int)
086adb01 +0x2f:  mov    0xc(%ebp),%edx
086adb04 +0x32:  mov    0x8(%ebp),%ecx
086adb07 +0x35:  mov    %edx,%eax
086adb09 +0x37:  shl    $0x2,%eax
086adb0c +0x3a:  add    %edx,%eax
086adb0e +0x3c:  shl    $0x2,%eax
086adb11 +0x3f:  mov    0xc(%ebp),%edx
086adb14 +0x42:  mov    %edx,(%eax,%ecx,1)
086adb17 +0x45:  mov    0xc(%ebp),%edx
086adb1a +0x48:  mov    0x8(%ebp),%ecx
086adb1d +0x4b:  mov    %edx,%eax
086adb1f +0x4d:  shl    $0x2,%eax
086adb22 +0x50:  add    %edx,%eax
086adb24 +0x52:  shl    $0x2,%eax
086adb27 +0x55:  lea    (%ecx,%eax,1),%eax
086adb2a +0x58:  lea    0x4(%eax),%edx
086adb2d +0x5b:  mov    0x10(%ebp),%eax
086adb30 +0x5e:  mov    %eax,(%edx)
086adb32 +0x60:  mov    0xc(%ebp),%edx
086adb35 +0x63:  mov    0x8(%ebp),%ecx
086adb38 +0x66:  mov    %edx,%eax
086adb3a +0x68:  shl    $0x2,%eax
086adb3d +0x6b:  add    %edx,%eax
086adb3f +0x6d:  shl    $0x2,%eax
086adb42 +0x70:  lea    (%ecx,%eax,1),%eax
086adb45 +0x73:  lea    0x8(%eax),%edx
086adb48 +0x76:  mov    0x14(%ebp),%eax
086adb4b +0x79:  mov    %eax,(%edx)
086adb4d +0x7b:  mov    0xc(%ebp),%edx
086adb50 +0x7e:  mov    0x8(%ebp),%ecx
086adb53 +0x81:  mov    %edx,%eax
086adb55 +0x83:  shl    $0x2,%eax
086adb58 +0x86:  add    %edx,%eax
086adb5a +0x88:  shl    $0x2,%eax
086adb5d +0x8b:  lea    (%ecx,%eax,1),%eax
086adb60 +0x8e:  lea    0xc(%eax),%edx
086adb63 +0x91:  mov    0x18(%ebp),%eax
086adb66 +0x94:  mov    %eax,(%edx)
086adb68 +0x96:  mov    0xc(%ebp),%edx
086adb6b +0x99:  mov    %edx,%eax
086adb6d +0x9b:  shl    $0x3,%eax
086adb70 +0x9e:  add    %edx,%eax
086adb72 +0xa0:  shl    $0x5,%eax
086adb75 +0xa3:  mov    &g_SPremiumInfo+0xac(%eax),%eax
086adb7b +0xa9:  cmp    $0xffffffff,%eax
086adb7e +0xac:  je     086adb8a <+0xb8>
086adb80 +0xae:  mov    0x8(%ebp),%eax
086adb83 +0xb1:  movb   $0x1,0x862(%eax)
086adb8a +0xb8:  movl   $0x1,0x8(%esp)
086adb92 +0xc0:  mov    0xc(%ebp),%eax
086adb95 +0xc3:  mov    %eax,0x4(%esp)
086adb99 +0xc7:  mov    0x8(%ebp),%eax
086adb9c +0xca:  mov    %eax,(%esp)
086adb9f +0xcd:  call   086adc6a <_ZN8WongWork12CUserPremium12startPremiumEib>  ; WongWork::CUserPremium::startPremium(int, bool)
086adba4 +0xd2:  leave
086adba5 +0xd3:  ret
```

## 反编译 C

```c
// WongWork::CUserPremium::AddPremium @ 0x86adad2

/* WongWork::CUserPremium::AddPremium(int, int, int, int) */

void __thiscall
WongWork::CUserPremium::AddPremium
          (CUserPremium *this,int param_1,int param_2,int param_3,int param_4)

{
  if (*(int *)(this + param_1 * 0x14) != 0) {
    RemovePremium(this,param_1);
  }
  *(int *)(this + param_1 * 0x14) = param_1;
  *(int *)(this + param_1 * 0x14 + 4) = param_2;
  *(int *)(this + param_1 * 0x14 + 8) = param_3;
  *(int *)(this + param_1 * 0x14 + 0xc) = param_4;
  if (*(int *)(g_SPremiumInfo + param_1 * 0x120 + 0xac) != -1) {
    this[0x862] = (CUserPremium)0x1;
  }
  startPremium(this,param_1,true);
  return;
}
```
