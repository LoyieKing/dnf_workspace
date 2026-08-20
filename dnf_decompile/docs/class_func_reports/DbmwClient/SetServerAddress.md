# SetServerAddress

`_ZN10DbmwClient16SetServerAddressEPKct`

`DbmwClient::SetServerAddress(char const*, unsigned short)`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x08120af6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08120af6  _ZN10DbmwClient16SetServerAddressEPKct
#           DbmwClient::SetServerAddress(char const*, unsigned short)
# range [0x08120af6, 0x08120b31]
08120af6 +0x00:  push   %ebp
08120af7 +0x01:  mov    %esp,%ebp
08120af9 +0x03:  sub    $0x28,%esp
08120afc +0x06:  mov    0x10(%ebp),%eax
08120aff +0x09:  mov    %ax,-0xc(%ebp)
08120b03 +0x0d:  mov    0x8(%ebp),%eax
08120b06 +0x10:  movw   $0x2,0x1c(%eax)
08120b0c +0x16:  mov    0xc(%ebp),%eax
08120b0f +0x19:  mov    %eax,(%esp)
08120b12 +0x1c:  call   0807e530 <_init+0xe28>
08120b17 +0x21:  mov    0x8(%ebp),%edx
08120b1a +0x24:  mov    %eax,0x20(%edx)
08120b1d +0x27:  movzwl -0xc(%ebp),%eax
08120b21 +0x2b:  mov    %eax,(%esp)
08120b24 +0x2e:  call   0807e680 <_init+0xf78>
08120b29 +0x33:  mov    0x8(%ebp),%edx
08120b2c +0x36:  mov    %ax,0x1e(%edx)
08120b30 +0x3a:  leave
08120b31 +0x3b:  ret
```

## 反编译 C

```c
// DbmwClient::SetServerAddress @ 0x8120af6

/* DbmwClient::SetServerAddress(char const*, unsigned short) */

void __thiscall DbmwClient::SetServerAddress(DbmwClient *this,char *param_1,ushort param_2)

{
  uint16_t uVar1;
  in_addr_t iVar2;
  
  *(undefined2 *)(this + 0x1c) = 2;
  iVar2 = inet_addr(param_1);
  *(in_addr_t *)(this + 0x20) = iVar2;
  uVar1 = htons(param_2);
  *(uint16_t *)(this + 0x1e) = uVar1;
  return;
}
```
