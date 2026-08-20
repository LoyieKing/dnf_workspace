# WarRoomFail

`_ZN7WarRoom11WarRoomFailEv`

`WarRoom::WarRoomFail()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086c07ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c07ee  _ZN7WarRoom11WarRoomFailEv
#           WarRoom::WarRoomFail()
# range [0x086c07ee, 0x086c08a5]
086c07ee +0x00:  push   %ebp
086c07ef +0x01:  mov    %esp,%ebp
086c07f1 +0x03:  sub    $0x28,%esp
086c07f4 +0x06:  mov    0x8(%ebp),%eax
086c07f7 +0x09:  mov    %eax,(%esp)
086c07fa +0x0c:  call   086bac0c <_ZNK7WarRoom12GetLiveCountEv>  ; WarRoom::GetLiveCount() const
086c07ff +0x11:  test   %eax,%eax
086c0801 +0x13:  setne  %al
086c0804 +0x16:  test   %al,%al
086c0806 +0x18:  jne    086c08a2 <+0xb4>
086c080c +0x1e:  movl   $0x0,-0x10(%ebp)
086c0813 +0x25:  jmp    086c0882 <+0x94>
086c0815 +0x27:  mov    -0x10(%ebp),%edx
086c0818 +0x2a:  mov    0x8(%ebp),%eax
086c081b +0x2d:  add    $0x48,%edx
086c081e +0x30:  mov    0xc(%eax,%edx,4),%eax
086c0822 +0x34:  test   %eax,%eax
086c0824 +0x36:  je     086c087e <+0x90>
086c0826 +0x38:  mov    -0x10(%ebp),%edx
086c0829 +0x3b:  mov    0x8(%ebp),%eax
086c082c +0x3e:  add    $0x48,%edx
086c082f +0x41:  mov    0xc(%eax,%edx,4),%eax
086c0833 +0x45:  mov    %eax,0x4(%esp)
086c0837 +0x49:  mov    0x8(%ebp),%eax
086c083a +0x4c:  mov    %eax,(%esp)
086c083d +0x4f:  call   086ba948 <_ZN7WarRoom10AddBanListEP5CUser>  ; WarRoom::AddBanList(CUser*)
086c0842 +0x54:  mov    -0x10(%ebp),%edx
086c0845 +0x57:  mov    0x8(%ebp),%eax
086c0848 +0x5a:  add    $0x48,%edx
086c084b +0x5d:  mov    0xc(%eax,%edx,4),%eax
086c084f +0x61:  mov    %eax,-0xc(%ebp)
086c0852 +0x64:  mov    -0x10(%ebp),%eax
086c0855 +0x67:  mov    %eax,0x4(%esp)
086c0859 +0x6b:  mov    0x8(%ebp),%eax
086c085c +0x6e:  mov    %eax,(%esp)
086c085f +0x71:  call   086bd256 <_ZN7WarRoom17WalkOutUserBySlotEi>  ; WarRoom::WalkOutUserBySlot(int)
086c0864 +0x76:  movl   $0x4,0x8(%esp)
086c086c +0x7e:  mov    -0xc(%ebp),%eax
086c086f +0x81:  mov    %eax,0x4(%esp)
086c0873 +0x85:  mov    0x8(%ebp),%eax
086c0876 +0x88:  mov    %eax,(%esp)
086c0879 +0x8b:  call   086be152 <_ZN7WarRoom11SendWalkOutEP5CUser17ENUM_WALKOUT_TYPE>  ; WarRoom::SendWalkOut(CUser*, ENUM_WALKOUT_TYPE)
086c087e +0x90:  addl   $0x1,-0x10(%ebp)
086c0882 +0x94:  cmpl   $0x5,-0x10(%ebp)
086c0886 +0x98:  setle  %al
086c0889 +0x9b:  test   %al,%al
086c088b +0x9d:  jne    086c0815 <+0x27>
086c088d +0x9f:  movl   $0x0,0x4(%esp)
086c0895 +0xa7:  mov    0x8(%ebp),%eax
086c0898 +0xaa:  mov    %eax,(%esp)
086c089b +0xad:  call   086bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>  ; WarRoom::ChangeState(WARROOM_STATE)
086c08a0 +0xb2:  jmp    086c08a3 <+0xb5>
086c08a2 +0xb4:  nop
086c08a3 +0xb5:  leave
086c08a4 +0xb6:  ret
086c08a5 +0xb7:  nop
```

## 反编译 C

```c
// WarRoom::WarRoomFail @ 0x86c07ee

/* WarRoom::WarRoomFail() */

void __thiscall WarRoom::WarRoomFail(WarRoom *this)

{
  undefined4 uVar1;
  int iVar2;
  int local_14;
  
  iVar2 = GetLiveCount(this);
  if (iVar2 == 0) {
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      if (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) {
        AddBanList(this,*(CUser **)(this + (local_14 + 0x48) * 4 + 0xc));
        uVar1 = *(undefined4 *)(this + (local_14 + 0x48) * 4 + 0xc);
        WalkOutUserBySlot(this,local_14);
        SendWalkOut(this,uVar1,4);
      }
    }
    ChangeState(this,0);
  }
  return;
}
```
