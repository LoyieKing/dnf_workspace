# isDoingJobChangeQuest

`_ZNK9UserQuest21isDoingJobChangeQuestEv`

`UserQuest::isDoingJobChangeQuest() const`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086ad48a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ad48a  _ZNK9UserQuest21isDoingJobChangeQuestEv
#           UserQuest::isDoingJobChangeQuest() const
# range [0x086ad48a, 0x086ad50e]
086ad48a +0x00:  push   %ebp
086ad48b +0x01:  mov    %esp,%ebp
086ad48d +0x03:  push   %ebx
086ad48e +0x04:  sub    $0x24,%esp
086ad491 +0x07:  movl   $0x0,-0x10(%ebp)
086ad498 +0x0e:  jmp    086ad4f9 <+0x6f>
086ad49a +0x10:  mov    -0x10(%ebp),%edx
086ad49d +0x13:  mov    0x8(%ebp),%eax
086ad4a0 +0x16:  add    $0x1d4c,%edx
086ad4a6 +0x1c:  mov    0x8(%eax,%edx,4),%eax
086ad4aa +0x20:  test   %eax,%eax
086ad4ac +0x22:  je     086ad4f5 <+0x6b>
086ad4ae +0x24:  mov    -0x10(%ebp),%edx
086ad4b1 +0x27:  mov    0x8(%ebp),%eax
086ad4b4 +0x2a:  add    $0x1d4c,%edx
086ad4ba +0x30:  mov    0x8(%eax,%edx,4),%ebx
086ad4be +0x34:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086ad4c3 +0x39:  mov    %ebx,0x4(%esp)
086ad4c7 +0x3d:  mov    %eax,(%esp)
086ad4ca +0x40:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
086ad4cf +0x45:  mov    %eax,-0xc(%ebp)
086ad4d2 +0x48:  cmpl   $0x0,-0xc(%ebp)
086ad4d6 +0x4c:  je     086ad4f5 <+0x6b>
086ad4d8 +0x4e:  mov    -0xc(%ebp),%eax
086ad4db +0x51:  mov    0x1c(%eax),%eax
086ad4de +0x54:  cmp    $0x1,%eax
086ad4e1 +0x57:  je     086ad4ee <+0x64>
086ad4e3 +0x59:  mov    -0xc(%ebp),%eax
086ad4e6 +0x5c:  mov    0x1c(%eax),%eax
086ad4e9 +0x5f:  cmp    $0x2,%eax
086ad4ec +0x62:  jne    086ad4f5 <+0x6b>
086ad4ee +0x64:  mov    $0x1,%eax
086ad4f3 +0x69:  jmp    086ad509 <+0x7f>
086ad4f5 +0x6b:  addl   $0x1,-0x10(%ebp)
086ad4f9 +0x6f:  cmpl   $0x13,-0x10(%ebp)
086ad4fd +0x73:  setle  %al
086ad500 +0x76:  test   %al,%al
086ad502 +0x78:  jne    086ad49a <+0x10>
086ad504 +0x7a:  mov    $0x0,%eax
086ad509 +0x7f:  add    $0x24,%esp
086ad50c +0x82:  pop    %ebx
086ad50d +0x83:  pop    %ebp
086ad50e +0x84:  ret
```

## 反编译 C

```c
// UserQuest::isDoingJobChangeQuest @ 0x86ad48a

/* UserQuest::isDoingJobChangeQuest() const */

undefined4 __thiscall UserQuest::isDoingJobChangeQuest(UserQuest *this)

{
  int iVar1;
  int local_14;
  
  local_14 = 0;
  do {
    if (0x13 < local_14) {
      return 0;
    }
    if (*(int *)(this + (local_14 + 0x1d4c) * 4 + 8) != 0) {
      iVar1 = G_CDataManager();
      iVar1 = CDataManager::find_quest(iVar1);
      if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x1c) == 1 || (*(int *)(iVar1 + 0x1c) == 2)))) {
        return 1;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
