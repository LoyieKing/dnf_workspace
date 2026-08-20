# SetCurCharacMaxEquipLevel

`_ZN15CUserCharacInfo25SetCurCharacMaxEquipLevelEi`

`CUserCharacInfo::SetCurCharacMaxEquipLevel(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x086467c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086467c2  _ZN15CUserCharacInfo25SetCurCharacMaxEquipLevelEi
#           CUserCharacInfo::SetCurCharacMaxEquipLevel(int)
# range [0x086467c2, 0x086467ed]
086467c2 +0x00:  push   %ebp
086467c3 +0x01:  mov    %esp,%ebp
086467c5 +0x03:  sub    $0x18,%esp
086467c8 +0x06:  mov    0x8(%ebp),%eax
086467cb +0x09:  mov    0x10(%eax),%eax
086467ce +0x0c:  test   %eax,%eax
086467d0 +0x0e:  je     086467ec <+0x2a>
086467d2 +0x10:  mov    0x8(%ebp),%eax
086467d5 +0x13:  mov    %eax,(%esp)
086467d8 +0x16:  call   0822f26e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4918>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4918
086467dd +0x1b:  mov    0x8(%ebp),%eax
086467e0 +0x1e:  mov    0x10(%eax),%eax
086467e3 +0x21:  mov    0xc(%ebp),%edx
086467e6 +0x24:  mov    %edx,0x14c2(%eax)
086467ec +0x2a:  leave
086467ed +0x2b:  ret
```

## 反编译 C

```c
// CUserCharacInfo::SetCurCharacMaxEquipLevel @ 0x86467c2

/* CUserCharacInfo::SetCurCharacMaxEquipLevel(int) */

void __thiscall CUserCharacInfo::SetCurCharacMaxEquipLevel(CUserCharacInfo *this,int param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacManageInfo(this);
    *(int *)(*(int *)(this + 0x10) + 0x14c2) = param_1;
  }
  return;
}
```
