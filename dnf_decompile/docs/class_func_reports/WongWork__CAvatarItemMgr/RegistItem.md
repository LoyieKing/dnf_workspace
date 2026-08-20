# RegistItem

`_ZN8WongWork14CAvatarItemMgr10RegistItemERK16AvatarDetailInfob`

`WongWork::CAvatarItemMgr::RegistItem(AvatarDetailInfo const&, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f8fb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f8fb0  _ZN8WongWork14CAvatarItemMgr10RegistItemERK16AvatarDetailInfob
#           WongWork::CAvatarItemMgr::RegistItem(AvatarDetailInfo const&, bool)
# range [0x082f8fb0, 0x082f901b]
082f8fb0 +0x00:  push   %ebp
082f8fb1 +0x01:  mov    %esp,%ebp
082f8fb3 +0x03:  push   %edi
082f8fb4 +0x04:  push   %esi
082f8fb5 +0x05:  push   %ebx
082f8fb6 +0x06:  sub    $0x3c,%esp
082f8fb9 +0x09:  mov    0x10(%ebp),%eax
082f8fbc +0x0c:  mov    %al,-0x1c(%ebp)
082f8fbf +0x0f:  movzbl -0x1c(%ebp),%ebx
082f8fc3 +0x13:  mov    0xc(%ebp),%eax
082f8fc6 +0x16:  add    $0x47,%eax
082f8fc9 +0x19:  mov    %eax,-0x20(%ebp)
082f8fcc +0x1c:  mov    0xc(%ebp),%eax
082f8fcf +0x1f:  lea    0x29(%eax),%edi
082f8fd2 +0x22:  mov    0xc(%ebp),%eax
082f8fd5 +0x25:  lea    0xc(%eax),%esi
082f8fd8 +0x28:  mov    0xc(%ebp),%eax
082f8fdb +0x2b:  mov    0x8(%eax),%ecx
082f8fde +0x2e:  mov    0xc(%ebp),%eax
082f8fe1 +0x31:  mov    0x4(%eax),%edx
082f8fe4 +0x34:  mov    0xc(%ebp),%eax
082f8fe7 +0x37:  mov    (%eax),%eax
082f8fe9 +0x39:  mov    %ebx,0x1c(%esp)
082f8fed +0x3d:  mov    -0x20(%ebp),%ebx
082f8ff0 +0x40:  mov    %ebx,0x18(%esp)
082f8ff4 +0x44:  mov    %edi,0x14(%esp)
082f8ff8 +0x48:  mov    %esi,0x10(%esp)
082f8ffc +0x4c:  mov    %ecx,0xc(%esp)
082f9000 +0x50:  mov    %edx,0x8(%esp)
082f9004 +0x54:  mov    %eax,0x4(%esp)
082f9008 +0x58:  mov    0x8(%ebp),%eax
082f900b +0x5b:  mov    %eax,(%esp)
082f900e +0x5e:  call   082f901c <_ZN8WongWork14CAvatarItemMgr10RegistItemEiiiPKcRK20stAvatarEmblemInfo_tRK23stAvatarExpansionInfo_tb>  ; WongWork::CAvatarItemMgr::RegistItem(int, int, int, char const*, stAvatarEmblemInfo_t const&, stAvatarExpansionInfo_t const&, bool)
082f9013 +0x63:  add    $0x3c,%esp
082f9016 +0x66:  pop    %ebx
082f9017 +0x67:  pop    %esi
082f9018 +0x68:  pop    %edi
082f9019 +0x69:  pop    %ebp
082f901a +0x6a:  ret
082f901b +0x6b:  nop
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::RegistItem @ 0x82f8fb0

/* WongWork::CAvatarItemMgr::RegistItem(AvatarDetailInfo const&, bool) */

void __thiscall
WongWork::CAvatarItemMgr::RegistItem(CAvatarItemMgr *this,AvatarDetailInfo *param_1,bool param_2)

{
  RegistItem(this,*(int *)param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8),
             (char *)(param_1 + 0xc),(stAvatarEmblemInfo_t *)(param_1 + 0x29),
             (stAvatarExpansionInfo_t *)(param_1 + 0x47),param_2);
  return;
}
```
