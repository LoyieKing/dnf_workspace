# _getBossGoldDrop

`_ZN8WongWork12CMonsterDrop16_getBossGoldDropEhRtS1_`

`WongWork::CMonsterDrop::_getBossGoldDrop(unsigned char, unsigned short&, unsigned short&)`

| 类 | 地址 |
|---|---|
| `WongWork::CMonsterDrop` | `0x08535dc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08535dc8  _ZN8WongWork12CMonsterDrop16_getBossGoldDropEhRtS1_
#           WongWork::CMonsterDrop::_getBossGoldDrop(unsigned char, unsigned short&, unsigned short&)
# range [0x08535dc8, 0x08535ed1]
08535dc8 +0x000:  push   %ebp
08535dc9 +0x001:  mov    %esp,%ebp
08535dcb +0x003:  push   %ebx
08535dcc +0x004:  sub    $0x34,%esp
08535dcf +0x007:  mov    0xc(%ebp),%eax
08535dd2 +0x00a:  mov    %al,-0x1c(%ebp)
08535dd5 +0x00d:  cmpb   $0x3,-0x1c(%ebp)
08535dd9 +0x011:  ja     08535ec7 <+0xff>
08535ddf +0x017:  movl   $0x0,-0xc(%ebp)
08535de6 +0x01e:  movzbl -0x1c(%ebp),%edx
08535dea +0x022:  mov    0x8(%ebp),%eax
08535ded +0x025:  movzwl 0x25938a(%eax,%edx,4),%eax
08535df5 +0x02d:  movzwl %ax,%ebx
08535df8 +0x030:  movzbl -0x1c(%ebp),%edx
08535dfc +0x034:  mov    0x8(%ebp),%eax
08535dff +0x037:  movzwl 0x25938a(%eax,%edx,4),%eax
08535e07 +0x03f:  movzwl %ax,%edx
08535e0a +0x042:  movzbl -0x1c(%ebp),%ecx
08535e0e +0x046:  mov    0x8(%ebp),%eax
08535e11 +0x049:  add    $0x964e0,%ecx
08535e17 +0x04f:  movzwl 0x8(%eax,%ecx,4),%eax
08535e1c +0x054:  movzwl %ax,%eax
08535e1f +0x057:  add    %eax,%edx
08535e21 +0x059:  mov    0x8(%ebp),%eax
08535e24 +0x05c:  add    $0x8,%eax
08535e27 +0x05f:  mov    %edx,0x8(%esp)
08535e2b +0x063:  movl   $0x0,0x4(%esp)
08535e33 +0x06b:  mov    %eax,(%esp)
08535e36 +0x06e:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
08535e3b +0x073:  cmp    %eax,%ebx
08535e3d +0x075:  setg   %al
08535e40 +0x078:  test   %al,%al
08535e42 +0x07a:  je     08535e4b <+0x83>
08535e44 +0x07c:  movl   $0x1,-0xc(%ebp)
08535e4b +0x083:  mov    -0xc(%ebp),%edx
08535e4e +0x086:  mov    0x8(%ebp),%eax
08535e51 +0x089:  add    $0x964e4,%edx
08535e57 +0x08f:  movzwl 0xa(%eax,%edx,4),%eax
08535e5c +0x094:  movzwl %ax,%edx
08535e5f +0x097:  mov    -0xc(%ebp),%ecx
08535e62 +0x09a:  mov    0x8(%ebp),%eax
08535e65 +0x09d:  add    $0x964e4,%ecx
08535e6b +0x0a3:  movzwl 0x8(%eax,%ecx,4),%eax
08535e70 +0x0a8:  movzwl %ax,%eax
08535e73 +0x0ab:  sub    %eax,%edx
08535e75 +0x0ad:  mov    0x8(%ebp),%eax
08535e78 +0x0b0:  add    $0x8,%eax
08535e7b +0x0b3:  mov    %edx,0x8(%esp)
08535e7f +0x0b7:  movl   $0x0,0x4(%esp)
08535e87 +0x0bf:  mov    %eax,(%esp)
08535e8a +0x0c2:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
08535e8f +0x0c7:  mov    %eax,%edx
08535e91 +0x0c9:  mov    -0xc(%ebp),%ecx
08535e94 +0x0cc:  mov    0x8(%ebp),%eax
08535e97 +0x0cf:  add    $0x964e4,%ecx
08535e9d +0x0d5:  movzwl 0x8(%eax,%ecx,4),%eax
08535ea2 +0x0da:  add    %eax,%edx
08535ea4 +0x0dc:  mov    0x10(%ebp),%eax
08535ea7 +0x0df:  mov    %dx,(%eax)
08535eaa +0x0e2:  mov    -0xc(%ebp),%edx
08535ead +0x0e5:  mov    0x8(%ebp),%eax
08535eb0 +0x0e8:  add    $0x12c9d0,%edx
08535eb6 +0x0ee:  movzwl (%eax,%edx,2),%edx
08535eba +0x0f2:  mov    0x14(%ebp),%eax
08535ebd +0x0f5:  mov    %dx,(%eax)
08535ec0 +0x0f8:  mov    $0x1,%eax
08535ec5 +0x0fd:  jmp    08535ecc <+0x104>
08535ec7 +0x0ff:  mov    $0x0,%eax
08535ecc +0x104:  add    $0x34,%esp
08535ecf +0x107:  pop    %ebx
08535ed0 +0x108:  pop    %ebp
08535ed1 +0x109:  ret
```

## 反编译 C

```c
// WongWork::CMonsterDrop::_getBossGoldDrop @ 0x8535dc8

/* WongWork::CMonsterDrop::_getBossGoldDrop(unsigned char, unsigned short&, unsigned short&) */

bool __thiscall
WongWork::CMonsterDrop::_getBossGoldDrop
          (CMonsterDrop *this,uchar param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint local_10;
  
  if (param_1 < 4) {
    uVar1 = *(ushort *)(this + (uint)param_1 * 4 + 0x25938a);
    iVar3 = CGenerateRandomNumber::generateNumber
                      ((CGenerateRandomNumber *)(this + 8),0,
                       (uint)*(ushort *)(this + (uint)param_1 * 4 + 0x25938a) +
                       (uint)*(ushort *)(this + (param_1 + 0x964e0) * 4 + 8));
    local_10 = (uint)(iVar3 < (int)(uint)uVar1);
    sVar2 = CGenerateRandomNumber::generateNumber
                      ((CGenerateRandomNumber *)(this + 8),0,
                       (uint)*(ushort *)(this + (local_10 + 0x964e4) * 4 + 10) -
                       (uint)*(ushort *)(this + (local_10 + 0x964e4) * 4 + 8));
    *param_2 = sVar2 + *(short *)(this + (local_10 + 0x964e4) * 4 + 8);
    *param_3 = *(ushort *)(this + (local_10 + 0x12c9d0) * 2);
  }
  return param_1 < 4;
}
```
