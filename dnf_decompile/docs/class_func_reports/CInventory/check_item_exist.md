# check_item_exist

`_ZNK10CInventory16check_item_existEi`

`CInventory::check_item_exist(int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08505172` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08505172  _ZNK10CInventory16check_item_existEi
#           CInventory::check_item_exist(int) const
# range [0x08505172, 0x085052bd]
08505172 +0x000:  push   %ebp
08505173 +0x001:  mov    %esp,%ebp
08505175 +0x003:  sub    $0x38,%esp
08505178 +0x006:  movl   $0x3,-0x10(%ebp)
0850517f +0x00d:  jmp    085051a9 <+0x37>
08505181 +0x00f:  mov    0x8(%ebp),%eax
08505184 +0x012:  mov    0x650(%eax),%edx
0850518a +0x018:  mov    -0x10(%ebp),%eax
0850518d +0x01b:  imul   $0x3d,%eax,%eax
08505190 +0x01e:  lea    (%edx,%eax,1),%eax
08505193 +0x021:  mov    0x2(%eax),%edx
08505196 +0x024:  mov    0xc(%ebp),%eax
08505199 +0x027:  cmp    %eax,%edx
0850519b +0x029:  jne    085051a5 <+0x33>
0850519d +0x02b:  mov    -0x10(%ebp),%eax
085051a0 +0x02e:  jmp    085052bb <+0x149>
085051a5 +0x033:  addl   $0x1,-0x10(%ebp)
085051a9 +0x037:  cmpl   $0x8,-0x10(%ebp)
085051ad +0x03b:  setle  %al
085051b0 +0x03e:  test   %al,%al
085051b2 +0x040:  jne    08505181 <+0xf>
085051b4 +0x042:  mov    0xc(%ebp),%eax
085051b7 +0x045:  mov    %eax,0x4(%esp)
085051bb +0x049:  mov    0x8(%ebp),%eax
085051be +0x04c:  mov    %eax,(%esp)
085051c1 +0x04f:  call   085018d2 <_ZNK10CInventory11GetItemTypeEi>  ; CInventory::GetItemType(int) const
085051c6 +0x054:  mov    %eax,-0xc(%ebp)
085051c9 +0x057:  cmpl   $0x0,-0xc(%ebp)
085051cd +0x05b:  jne    0850520c <+0x9a>
085051cf +0x05d:  mov    -0xc(%ebp),%eax
085051d2 +0x060:  mov    %eax,0x14(%esp)
085051d6 +0x064:  movl   $"Unknown Type %d",0x10(%esp)
085051de +0x06c:  movl   $0x1aa4,0xc(%esp)
085051e6 +0x074:  movl   $&_ZZNK10CInventory16check_item_existEiE19__PRETTY_FUNCTION__,0x8(%esp)
085051ee +0x07c:  movl   $"inventory.cpp",0x4(%esp)
085051f6 +0x084:  movl   $0x1,(%esp)
085051fd +0x08b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08505202 +0x090:  mov    $0xffffffff,%eax
08505207 +0x095:  jmp    085052bb <+0x149>
0850520c +0x09a:  lea    -0x18(%ebp),%eax
0850520f +0x09d:  mov    %eax,0xc(%esp)
08505213 +0x0a1:  lea    -0x14(%ebp),%eax
08505216 +0x0a4:  mov    %eax,0x8(%esp)
0850521a +0x0a8:  mov    -0xc(%ebp),%eax
0850521d +0x0ab:  mov    %eax,0x4(%esp)
08505221 +0x0af:  mov    0x8(%ebp),%eax
08505224 +0x0b2:  mov    %eax,(%esp)
08505227 +0x0b5:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
0850522c +0x0ba:  mov    -0xc(%ebp),%eax
0850522f +0x0bd:  mov    %eax,(%esp)
08505232 +0x0c0:  call   0850d159 <_GLOBAL__I_g_emptySlot+0x8e>  ; global constructors keyed to g_emptySlot+0x8e
08505237 +0x0c5:  test   %al,%al
08505239 +0x0c7:  je     0850527c <+0x10a>
0850523b +0x0c9:  mov    -0x14(%ebp),%eax
0850523e +0x0cc:  mov    %eax,-0x10(%ebp)
08505241 +0x0cf:  jmp    08505268 <+0xf6>
08505243 +0x0d1:  mov    0x8(%ebp),%eax
08505246 +0x0d4:  mov    0x6e4(%eax),%edx
0850524c +0x0da:  mov    -0x10(%ebp),%eax
0850524f +0x0dd:  imul   $0x3d,%eax,%eax
08505252 +0x0e0:  lea    (%edx,%eax,1),%eax
08505255 +0x0e3:  mov    0x2(%eax),%edx
08505258 +0x0e6:  mov    0xc(%ebp),%eax
0850525b +0x0e9:  cmp    %eax,%edx
0850525d +0x0eb:  jne    08505264 <+0xf2>
0850525f +0x0ed:  mov    -0x10(%ebp),%eax
08505262 +0x0f0:  jmp    085052bb <+0x149>
08505264 +0x0f2:  addl   $0x1,-0x10(%ebp)
08505268 +0x0f6:  mov    -0x18(%ebp),%eax
0850526b +0x0f9:  cmp    %eax,-0x10(%ebp)
0850526e +0x0fc:  setle  %al
08505271 +0x0ff:  test   %al,%al
08505273 +0x101:  jne    08505243 <+0xd1>
08505275 +0x103:  mov    $0xffffffff,%eax
0850527a +0x108:  jmp    085052bb <+0x149>
0850527c +0x10a:  mov    -0x14(%ebp),%eax
0850527f +0x10d:  mov    %eax,-0x10(%ebp)
08505282 +0x110:  jmp    085052a9 <+0x137>
08505284 +0x112:  mov    0x8(%ebp),%eax
08505287 +0x115:  mov    0x650(%eax),%edx
0850528d +0x11b:  mov    -0x10(%ebp),%eax
08505290 +0x11e:  imul   $0x3d,%eax,%eax
08505293 +0x121:  lea    (%edx,%eax,1),%eax
08505296 +0x124:  mov    0x2(%eax),%edx
08505299 +0x127:  mov    0xc(%ebp),%eax
0850529c +0x12a:  cmp    %eax,%edx
0850529e +0x12c:  jne    085052a5 <+0x133>
085052a0 +0x12e:  mov    -0x10(%ebp),%eax
085052a3 +0x131:  jmp    085052bb <+0x149>
085052a5 +0x133:  addl   $0x1,-0x10(%ebp)
085052a9 +0x137:  mov    -0x18(%ebp),%eax
085052ac +0x13a:  cmp    %eax,-0x10(%ebp)
085052af +0x13d:  setle  %al
085052b2 +0x140:  test   %al,%al
085052b4 +0x142:  jne    08505284 <+0x112>
085052b6 +0x144:  mov    $0xffffffff,%eax
085052bb +0x149:  leave
085052bc +0x14a:  ret
085052bd +0x14b:  nop
```

## 反编译 C

```c
// CInventory::check_item_exist @ 0x8505172

/* CInventory::check_item_exist(int) const */

int __thiscall CInventory::check_item_exist(CInventory *this,int param_1)

{
  char cVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  for (local_14 = 3; local_14 < 9; local_14 = local_14 + 1) {
    if (*(int *)(*(int *)(this + 0x650) + local_14 * 0x3d + 2) == param_1) {
      return local_14;
    }
  }
  local_10 = GetItemType(this,param_1);
  if (local_10 == 0) {
    LogManager::logFormat
              (1,"inventory.cpp","int CInventory::check_item_exist(int) const",0x1aa4,
               "Unknown Type %d",0);
  }
  else {
    StartEndPos(this,local_10,&local_18,&local_1c);
    cVar1 = IsCreatureItemType(local_10);
    if (cVar1 == '\0') {
      for (local_14 = local_18; local_14 <= local_1c; local_14 = local_14 + 1) {
        if (*(int *)(*(int *)(this + 0x650) + local_14 * 0x3d + 2) == param_1) {
          return local_14;
        }
      }
    }
    else {
      for (local_14 = local_18; local_14 <= local_1c; local_14 = local_14 + 1) {
        if (*(int *)(*(int *)(this + 0x6e4) + local_14 * 0x3d + 2) == param_1) {
          return local_14;
        }
      }
    }
  }
  return -1;
}
```
