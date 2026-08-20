# CMission

`_ZN8CMissionC1ERK13MissionScript`

`CMission::CMission(MissionScript const&)`

| 类 | 地址 |
|---|---|
| `CMission` | `0x085e2ffc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e2ffc  _ZN8CMissionC1ERK13MissionScript
#           CMission::CMission(MissionScript const&)
# range [0x085e2ffc, 0x085e30ad]
085e2ffc +0x00:  push   %ebp
085e2ffd +0x01:  mov    %esp,%ebp
085e2fff +0x03:  sub    $0x18,%esp
085e3002 +0x06:  mov    0x8(%ebp),%eax
085e3005 +0x09:  movl   $&_ZTV8CMission+0x8,(%eax)
085e300b +0x0f:  mov    0xc(%ebp),%eax
085e300e +0x12:  mov    0x78(%eax),%eax
085e3011 +0x15:  mov    %eax,%edx
085e3013 +0x17:  mov    0x8(%ebp),%eax
085e3016 +0x1a:  mov    %dl,0x4(%eax)
085e3019 +0x1d:  mov    0xc(%ebp),%eax
085e301c +0x20:  mov    0x8(%eax),%edx
085e301f +0x23:  mov    0x8(%ebp),%eax
085e3022 +0x26:  mov    %edx,0x8(%eax)
085e3025 +0x29:  mov    0xc(%ebp),%eax
085e3028 +0x2c:  mov    0xc(%eax),%edx
085e302b +0x2f:  mov    0x8(%ebp),%eax
085e302e +0x32:  mov    %edx,0xc(%eax)
085e3031 +0x35:  mov    0xc(%ebp),%eax
085e3034 +0x38:  mov    (%eax),%edx
085e3036 +0x3a:  mov    0x8(%ebp),%eax
085e3039 +0x3d:  mov    %edx,0x10(%eax)
085e303c +0x40:  mov    0xc(%ebp),%eax
085e303f +0x43:  mov    0x4(%eax),%edx
085e3042 +0x46:  mov    0x8(%ebp),%eax
085e3045 +0x49:  mov    %edx,0x14(%eax)
085e3048 +0x4c:  mov    0x8(%ebp),%eax
085e304b +0x4f:  lea    0x18(%eax),%ecx
085e304e +0x52:  mov    0xc(%ebp),%eax
085e3051 +0x55:  mov    0x14(%eax),%edx
085e3054 +0x58:  mov    0x10(%eax),%eax
085e3057 +0x5b:  mov    %eax,(%ecx)
085e3059 +0x5d:  mov    %edx,0x4(%ecx)
085e305c +0x60:  mov    0x8(%ebp),%eax
085e305f +0x63:  lea    0x20(%eax),%ecx
085e3062 +0x66:  mov    0xc(%ebp),%eax
085e3065 +0x69:  mov    0x1c(%eax),%edx
085e3068 +0x6c:  mov    0x18(%eax),%eax
085e306b +0x6f:  mov    %eax,(%ecx)
085e306d +0x71:  mov    %edx,0x4(%ecx)
085e3070 +0x74:  mov    0xc(%ebp),%eax
085e3073 +0x77:  mov    0x20(%eax),%edx
085e3076 +0x7a:  mov    0x8(%ebp),%eax
085e3079 +0x7d:  mov    %edx,0x28(%eax)
085e307c +0x80:  mov    0xc(%ebp),%eax
085e307f +0x83:  mov    0x40(%eax),%edx
085e3082 +0x86:  mov    0x8(%ebp),%eax
085e3085 +0x89:  mov    %edx,0x2c(%eax)
085e3088 +0x8c:  mov    0xc(%ebp),%eax
085e308b +0x8f:  lea    0x44(%eax),%edx
085e308e +0x92:  mov    0x8(%ebp),%eax
085e3091 +0x95:  add    $0x30,%eax
085e3094 +0x98:  mov    %edx,0x4(%esp)
085e3098 +0x9c:  mov    %eax,(%esp)
085e309b +0x9f:  call   08237302 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9ac
085e30a0 +0xa4:  mov    0xc(%ebp),%eax
085e30a3 +0xa7:  mov    0x24(%eax),%edx
085e30a6 +0xaa:  mov    0x8(%ebp),%eax
085e30a9 +0xad:  mov    %edx,0x3c(%eax)
085e30ac +0xb0:  leave
085e30ad +0xb1:  ret
```

## 反编译 C

```c
// CMission::CMission @ 0x85e2ffc

/* CMission::CMission(MissionScript const&) */

void __thiscall CMission::CMission(CMission *this,MissionScript *param_1)

{
  undefined4 uVar1;
  
  *(undefined ***)this = &PTR__makeTotalMissionInfo_08cc4048;
  this[4] = SUB41(*(undefined4 *)(param_1 + 0x78),0);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 4);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x1c) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x40);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x30),
             (vector *)(param_1 + 0x44));
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x24);
  return;
}
```
