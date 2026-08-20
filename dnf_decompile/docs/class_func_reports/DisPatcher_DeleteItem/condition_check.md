# condition_check

`_ZN21DisPatcher_DeleteItem15condition_checkEP5CUserR8MSG_BASER10INVEN_TYPEi`

`DisPatcher_DeleteItem::condition_check(CUser*, MSG_BASE&, INVEN_TYPE&, int)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DeleteItem` | `0x081c1d5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c1d5c  _ZN21DisPatcher_DeleteItem15condition_checkEP5CUserR8MSG_BASER10INVEN_TYPEi
#           DisPatcher_DeleteItem::condition_check(CUser*, MSG_BASE&, INVEN_TYPE&, int)
# range [0x081c1d5c, 0x081c1dd9]
081c1d5c +0x00:  push   %ebp
081c1d5d +0x01:  mov    %esp,%ebp
081c1d5f +0x03:  push   %ebx
081c1d60 +0x04:  sub    $0x24,%esp
081c1d63 +0x07:  mov    0x10(%ebp),%eax
081c1d66 +0x0a:  mov    %eax,-0xc(%ebp)
081c1d69 +0x0d:  mov    0x14(%ebp),%eax
081c1d6c +0x10:  mov    (%eax),%eax
081c1d6e +0x12:  test   %eax,%eax
081c1d70 +0x14:  jne    081c1d8d <+0x31>
081c1d72 +0x16:  mov    0x18(%ebp),%edx
081c1d75 +0x19:  mov    -0xc(%ebp),%eax
081c1d78 +0x1c:  add    $0x68,%edx
081c1d7b +0x1f:  movzwl 0x7(%eax,%edx,2),%eax
081c1d80 +0x24:  cmp    $0x9,%ax
081c1d84 +0x28:  jg     081c1d8d <+0x31>
081c1d86 +0x2a:  mov    $0x17,%eax
081c1d8b +0x2f:  jmp    081c1dd3 <+0x77>
081c1d8d +0x31:  mov    0x18(%ebp),%edx
081c1d90 +0x34:  mov    -0xc(%ebp),%eax
081c1d93 +0x37:  add    $0x68,%edx
081c1d96 +0x3a:  movzwl 0x7(%eax,%edx,2),%eax
081c1d9b +0x3f:  movswl %ax,%ebx
081c1d9e +0x42:  mov    -0xc(%ebp),%eax
081c1da1 +0x45:  movzbl 0xd(%eax),%eax
081c1da5 +0x49:  movsbl %al,%eax
081c1da8 +0x4c:  mov    %eax,(%esp)
081c1dab +0x4f:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081c1db0 +0x54:  mov    %ebx,0x8(%esp)
081c1db4 +0x58:  mov    %eax,0x4(%esp)
081c1db8 +0x5c:  mov    0xc(%ebp),%eax
081c1dbb +0x5f:  mov    %eax,(%esp)
081c1dbe +0x62:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081c1dc3 +0x67:  test   %al,%al
081c1dc5 +0x69:  je     081c1dce <+0x72>
081c1dc7 +0x6b:  mov    $0xd5,%eax
081c1dcc +0x70:  jmp    081c1dd3 <+0x77>
081c1dce +0x72:  mov    $0x0,%eax
081c1dd3 +0x77:  add    $0x24,%esp
081c1dd6 +0x7a:  pop    %ebx
081c1dd7 +0x7b:  pop    %ebp
081c1dd8 +0x7c:  ret
081c1dd9 +0x7d:  nop
```

## 反编译 C

```c
// DisPatcher_DeleteItem::condition_check @ 0x81c1d5c

/* DisPatcher_DeleteItem::condition_check(CUser*, MSG_BASE&, INVEN_TYPE&, int) */

undefined4 __thiscall
DisPatcher_DeleteItem::condition_check
          (DisPatcher_DeleteItem *this,CUser *param_1,MSG_BASE *param_2,INVEN_TYPE *param_3,
          int param_4)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(int *)param_3 == 0) && (*(short *)(param_2 + (param_4 + 0x68) * 2 + 7) < 10)) {
    uVar3 = 0x17;
  }
  else {
    sVar1 = *(short *)(param_2 + (param_4 + 0x68) * 2 + 7);
    iVar4 = GetInvenTypeFromItemSpace((int)(char)param_2[0xd]);
    cVar2 = CUser::CheckItemLock(param_1,iVar4,(int)sVar1);
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xd5;
    }
  }
  return uVar3;
}
```
