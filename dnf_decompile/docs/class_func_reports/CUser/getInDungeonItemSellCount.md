# getInDungeonItemSellCount

`_ZN5CUser25getInDungeonItemSellCountEii`

`CUser::getInDungeonItemSellCount(int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868b106` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868b106  _ZN5CUser25getInDungeonItemSellCountEii
#           CUser::getInDungeonItemSellCount(int, int)
# range [0x0868b106, 0x0868b20b]
0868b106 +0x000:  push   %ebp
0868b107 +0x001:  mov    %esp,%ebp
0868b109 +0x003:  sub    $0x28,%esp
0868b10c +0x006:  mov    0x8(%ebp),%eax
0868b10f +0x009:  mov    0x8eb24(%eax),%eax
0868b115 +0x00f:  cmp    $0x6,%eax
0868b118 +0x012:  jle    0868b124 <+0x1e>
0868b11a +0x014:  mov    $0x0,%eax
0868b11f +0x019:  jmp    0868b209 <+0x103>
0868b124 +0x01e:  mov    0x8(%ebp),%eax
0868b127 +0x021:  mov    %eax,(%esp)
0868b12a +0x024:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868b12f +0x029:  test   %eax,%eax
0868b131 +0x02b:  sete   %al
0868b134 +0x02e:  test   %al,%al
0868b136 +0x030:  je     0868b142 <+0x3c>
0868b138 +0x032:  mov    $0x0,%eax
0868b13d +0x037:  jmp    0868b209 <+0x103>
0868b142 +0x03c:  mov    0x10(%ebp),%eax
0868b145 +0x03f:  movzwl %ax,%edx
0868b148 +0x042:  mov    0xc(%ebp),%eax
0868b14b +0x045:  movzwl %ax,%eax
0868b14e +0x048:  mov    %edx,0x8(%esp)
0868b152 +0x04c:  mov    %eax,0x4(%esp)
0868b156 +0x050:  mov    0x8(%ebp),%eax
0868b159 +0x053:  mov    %eax,(%esp)
0868b15c +0x056:  call   08680f2e <_ZN5CUser24GetCurCharacInventoryRefEtt>  ; CUser::GetCurCharacInventoryRef(unsigned short, unsigned short)
0868b161 +0x05b:  mov    %eax,-0x14(%ebp)
0868b164 +0x05e:  cmpl   $0x0,-0x14(%ebp)
0868b168 +0x062:  jne    0868b174 <+0x6e>
0868b16a +0x064:  mov    $0x0,%eax
0868b16f +0x069:  jmp    0868b209 <+0x103>
0868b174 +0x06e:  movb   $0x0,-0xd(%ebp)
0868b178 +0x072:  movl   $0x0,-0xc(%ebp)
0868b17f +0x079:  jmp    0868b1a3 <+0x9d>
0868b181 +0x07b:  mov    -0xc(%ebp),%edx
0868b184 +0x07e:  mov    0x8(%ebp),%eax
0868b187 +0x081:  add    $&_ZL14gUnicodeBuffer+0x1959c,%edx
0868b18d +0x087:  mov    0x8(%eax,%edx,4),%edx
0868b191 +0x08b:  mov    -0x14(%ebp),%eax
0868b194 +0x08e:  mov    0x2(%eax),%eax
0868b197 +0x091:  cmp    %eax,%edx
0868b199 +0x093:  jne    0868b19f <+0x99>
0868b19b +0x095:  movb   $0x1,-0xd(%ebp)
0868b19f +0x099:  addl   $0x1,-0xc(%ebp)
0868b1a3 +0x09d:  movzbl -0xd(%ebp),%eax
0868b1a7 +0x0a1:  xor    $0x1,%eax
0868b1aa +0x0a4:  test   %al,%al
0868b1ac +0x0a6:  je     0868b1bb <+0xb5>
0868b1ae +0x0a8:  cmpl   $0x6,-0xc(%ebp)
0868b1b2 +0x0ac:  jg     0868b1bb <+0xb5>
0868b1b4 +0x0ae:  mov    $0x1,%eax
0868b1b9 +0x0b3:  jmp    0868b1c0 <+0xba>
0868b1bb +0x0b5:  mov    $0x0,%eax
0868b1c0 +0x0ba:  test   %al,%al
0868b1c2 +0x0bc:  jne    0868b181 <+0x7b>
0868b1c4 +0x0be:  movzbl -0xd(%ebp),%eax
0868b1c8 +0x0c2:  xor    $0x1,%eax
0868b1cb +0x0c5:  test   %al,%al
0868b1cd +0x0c7:  je     0868b200 <+0xfa>
0868b1cf +0x0c9:  mov    0x8(%ebp),%eax
0868b1d2 +0x0cc:  mov    0x8eb24(%eax),%ecx
0868b1d8 +0x0d2:  mov    -0x14(%ebp),%eax
0868b1db +0x0d5:  mov    0x2(%eax),%edx
0868b1de +0x0d8:  mov    0x8(%ebp),%eax
0868b1e1 +0x0db:  add    $&_ZL14gUnicodeBuffer+0x1959c,%ecx
0868b1e7 +0x0e1:  mov    %edx,0x8(%eax,%ecx,4)
0868b1eb +0x0e5:  mov    0x8(%ebp),%eax
0868b1ee +0x0e8:  mov    0x8eb24(%eax),%eax
0868b1f4 +0x0ee:  lea    0x1(%eax),%edx
0868b1f7 +0x0f1:  mov    0x8(%ebp),%eax
0868b1fa +0x0f4:  mov    %edx,0x8eb24(%eax)
0868b200 +0x0fa:  mov    0x8(%ebp),%eax
0868b203 +0x0fd:  mov    0x8eb24(%eax),%eax
0868b209 +0x103:  leave
0868b20a +0x104:  ret
0868b20b +0x105:  nop
```

## 反编译 C

```c
// CUser::getInDungeonItemSellCount @ 0x868b106

/* CUser::getInDungeonItemSellCount(int, int) */

undefined4 __thiscall CUser::getInDungeonItemSellCount(CUser *this,int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 0x8eb24) < 7) {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      iVar4 = GetCurCharacInventoryRef(this,(ushort)param_1,(ushort)param_2);
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        bVar2 = false;
        local_10 = 0;
        while( true ) {
          if ((bVar2) || (6 < local_10)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) break;
          if (*(int *)(this + (local_10 + 0x23ac8) * 4 + 8) == *(int *)(iVar4 + 2)) {
            bVar2 = true;
          }
          local_10 = local_10 + 1;
        }
        if (!bVar2) {
          *(undefined4 *)(this + (*(int *)(this + 0x8eb24) + 0x23ac8) * 4 + 8) =
               *(undefined4 *)(iVar4 + 2);
          *(int *)(this + 0x8eb24) = *(int *)(this + 0x8eb24) + 1;
        }
        uVar3 = *(undefined4 *)(this + 0x8eb24);
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
