# getTimeStamp

`_ZN6Taiwan14GarenaAuthData12getTimeStampEv`

`Taiwan::GarenaAuthData::getTimeStamp()`

| 类 | 地址 |
|---|---|
| `Taiwan::GarenaAuthData` | `0x08172fea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08172fea  _ZN6Taiwan14GarenaAuthData12getTimeStampEv
#           Taiwan::GarenaAuthData::getTimeStamp()
# range [0x08172fea, 0x08173007]
08172fea +0x00:  push   %ebp
08172feb +0x01:  mov    %esp,%ebp
08172fed +0x03:  sub    $0x18,%esp
08172ff0 +0x06:  mov    0x8(%ebp),%eax
08172ff3 +0x09:  mov    0x24(%eax),%eax
08172ff6 +0x0c:  mov    %eax,(%esp)
08172ff9 +0x0f:  call   0807db80 <_init+0x478>
08172ffe +0x14:  mov    0x8(%ebp),%edx
08173001 +0x17:  mov    0x64(%edx),%edx
08173004 +0x1a:  add    %edx,%eax
08173006 +0x1c:  leave
08173007 +0x1d:  ret
```

## 反编译 C

```c
// Taiwan::GarenaAuthData::getTimeStamp @ 0x8172fea

/* Taiwan::GarenaAuthData::getTimeStamp() */

int __thiscall Taiwan::GarenaAuthData::getTimeStamp(GarenaAuthData *this)

{
  uint32_t uVar1;
  
  uVar1 = ntohl(*(uint32_t *)(this + 0x24));
  return uVar1 + *(int *)(this + 100);
}
```
