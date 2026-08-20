# Update

`_ZNK15CMission_within6UpdateER11MissionInfoRK31MissionClearCondition_Parameter`

`CMission_within::Update(MissionInfo&, MissionClearCondition_Parameter const&) const`

| 类 | 地址 |
|---|---|
| `CMission_within` | `0x085e3d58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3d58  _ZNK15CMission_within6UpdateER11MissionInfoRK31MissionClearCondition_Parameter
#           CMission_within::Update(MissionInfo&, MissionClearCondition_Parameter const&) const
# range [0x085e3d58, 0x085e3db7]
085e3d58 +0x00:  push   %ebp
085e3d59 +0x01:  mov    %esp,%ebp
085e3d5b +0x03:  mov    0xc(%ebp),%eax
085e3d5e +0x06:  movzwl 0x4(%eax),%eax
085e3d62 +0x0a:  cwtl
085e3d63 +0x0b:  add    %eax,%eax
085e3d65 +0x0d:  mov    %eax,%edx
085e3d67 +0x0f:  mov    0xc(%ebp),%eax
085e3d6a +0x12:  mov    %dx,0x4(%eax)
085e3d6e +0x16:  mov    0xc(%ebp),%eax
085e3d71 +0x19:  movzwl 0x4(%eax),%eax
085e3d75 +0x1d:  mov    %eax,%edx
085e3d77 +0x1f:  mov    0x10(%ebp),%eax
085e3d7a +0x22:  movzwl 0x1(%eax),%eax
085e3d7e +0x26:  movzwl %ax,%eax
085e3d81 +0x29:  and    $0x1,%eax
085e3d84 +0x2c:  test   %al,%al
085e3d86 +0x2e:  je     085e3d8f <+0x37>
085e3d88 +0x30:  mov    $0x1,%eax
085e3d8d +0x35:  jmp    085e3d94 <+0x3c>
085e3d8f +0x37:  mov    $0x0,%eax
085e3d94 +0x3c:  lea    (%edx,%eax,1),%eax
085e3d97 +0x3f:  mov    %eax,%edx
085e3d99 +0x41:  mov    0xc(%ebp),%eax
085e3d9c +0x44:  mov    %dx,0x4(%eax)
085e3da0 +0x48:  mov    0xc(%ebp),%eax
085e3da3 +0x4b:  movzwl 0x6(%eax),%eax
085e3da7 +0x4f:  lea    0x1(%eax),%edx
085e3daa +0x52:  mov    0xc(%ebp),%eax
085e3dad +0x55:  mov    %dx,0x6(%eax)
085e3db1 +0x59:  mov    $0x1,%eax
085e3db6 +0x5e:  pop    %ebp
085e3db7 +0x5f:  ret
```

## 反编译 C

```c
// CMission_within::Update @ 0x85e3d58

/* CMission_within::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4 __thiscall
CMission_within::Update
          (CMission_within *this,MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) * 2;
  *(ushort *)(param_1 + 4) = *(short *)(param_1 + 4) + (ushort)((*(ushort *)(param_2 + 1) & 1) != 0)
  ;
  *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  return 1;
}
```
