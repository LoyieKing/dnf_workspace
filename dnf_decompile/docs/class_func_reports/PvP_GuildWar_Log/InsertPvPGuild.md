# InsertPvPGuild

`_ZN16PvP_GuildWar_Log14InsertPvPGuildEji`

`PvP_GuildWar_Log::InsertPvPGuild(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `PvP_GuildWar_Log` | `0x085ddd80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ddd80  _ZN16PvP_GuildWar_Log14InsertPvPGuildEji
#           PvP_GuildWar_Log::InsertPvPGuild(unsigned int, int)
# range [0x085ddd80, 0x085ddead]
085ddd80 +0x000:  push   %ebp
085ddd81 +0x001:  mov    %esp,%ebp
085ddd83 +0x003:  push   %ebx
085ddd84 +0x004:  sub    $0x10,%esp
085ddd87 +0x007:  movl   $0x0,-0x8(%ebp)
085ddd8e +0x00e:  jmp    085dde94 <+0x114>
085ddd93 +0x013:  mov    -0x8(%ebp),%edx
085ddd96 +0x016:  mov    0x8(%ebp),%ecx
085ddd99 +0x019:  mov    %edx,%eax
085ddd9b +0x01b:  add    %eax,%eax
085ddd9d +0x01d:  add    %edx,%eax
085ddd9f +0x01f:  shl    $0x2,%eax
085ddda2 +0x022:  lea    (%ecx,%eax,1),%eax
085ddda5 +0x025:  add    $0x8,%eax
085ddda8 +0x028:  mov    (%eax),%eax
085dddaa +0x02a:  test   %eax,%eax
085dddac +0x02c:  je     085dde33 <+0xb3>
085dddb2 +0x032:  mov    -0x8(%ebp),%edx
085dddb5 +0x035:  mov    0x8(%ebp),%ecx
085dddb8 +0x038:  mov    %edx,%eax
085dddba +0x03a:  add    %eax,%eax
085dddbc +0x03c:  add    %edx,%eax
085dddbe +0x03e:  shl    $0x2,%eax
085dddc1 +0x041:  lea    (%ecx,%eax,1),%eax
085dddc4 +0x044:  add    $0x8,%eax
085dddc7 +0x047:  mov    (%eax),%eax
085dddc9 +0x049:  cmp    0xc(%ebp),%eax
085dddcc +0x04c:  jne    085dde90 <+0x110>
085dddd2 +0x052:  mov    -0x8(%ebp),%edx
085dddd5 +0x055:  mov    -0x8(%ebp),%ecx
085dddd8 +0x058:  mov    0x8(%ebp),%ebx
085ddddb +0x05b:  mov    %ecx,%eax
085ddddd +0x05d:  add    %eax,%eax
085ddddf +0x05f:  add    %ecx,%eax
085ddde1 +0x061:  shl    $0x2,%eax
085ddde4 +0x064:  lea    (%ebx,%eax,1),%eax
085ddde7 +0x067:  add    $0xc,%eax
085dddea +0x06a:  mov    (%eax),%eax
085dddec +0x06c:  mov    %eax,%ecx
085dddee +0x06e:  add    0x10(%ebp),%ecx
085dddf1 +0x071:  mov    0x8(%ebp),%ebx
085dddf4 +0x074:  mov    %edx,%eax
085dddf6 +0x076:  add    %eax,%eax
085dddf8 +0x078:  add    %edx,%eax
085dddfa +0x07a:  shl    $0x2,%eax
085dddfd +0x07d:  lea    (%ebx,%eax,1),%eax
085dde00 +0x080:  add    $0xc,%eax
085dde03 +0x083:  mov    %ecx,(%eax)
085dde05 +0x085:  mov    -0x8(%ebp),%edx
085dde08 +0x088:  mov    0x8(%ebp),%ecx
085dde0b +0x08b:  mov    %edx,%eax
085dde0d +0x08d:  add    %eax,%eax
085dde0f +0x08f:  add    %edx,%eax
085dde11 +0x091:  shl    $0x2,%eax
085dde14 +0x094:  movzbl 0x10(%eax,%ecx,1),%eax
085dde19 +0x099:  lea    0x1(%eax),%ebx
085dde1c +0x09c:  mov    0x8(%ebp),%ecx
085dde1f +0x09f:  mov    %edx,%eax
085dde21 +0x0a1:  add    %eax,%eax
085dde23 +0x0a3:  add    %edx,%eax
085dde25 +0x0a5:  shl    $0x2,%eax
085dde28 +0x0a8:  mov    %bl,0x10(%eax,%ecx,1)
085dde2c +0x0ac:  mov    $0x1,%eax
085dde31 +0x0b1:  jmp    085ddea8 <+0x128>
085dde33 +0x0b3:  mov    -0x8(%ebp),%edx
085dde36 +0x0b6:  mov    0x8(%ebp),%ecx
085dde39 +0x0b9:  mov    %edx,%eax
085dde3b +0x0bb:  add    %eax,%eax
085dde3d +0x0bd:  add    %edx,%eax
085dde3f +0x0bf:  shl    $0x2,%eax
085dde42 +0x0c2:  lea    (%ecx,%eax,1),%eax
085dde45 +0x0c5:  lea    0x8(%eax),%edx
085dde48 +0x0c8:  mov    0xc(%ebp),%eax
085dde4b +0x0cb:  mov    %eax,(%edx)
085dde4d +0x0cd:  mov    -0x8(%ebp),%edx
085dde50 +0x0d0:  mov    0x8(%ebp),%ecx
085dde53 +0x0d3:  mov    %edx,%eax
085dde55 +0x0d5:  add    %eax,%eax
085dde57 +0x0d7:  add    %edx,%eax
085dde59 +0x0d9:  shl    $0x2,%eax
085dde5c +0x0dc:  lea    (%ecx,%eax,1),%eax
085dde5f +0x0df:  lea    0xc(%eax),%edx
085dde62 +0x0e2:  mov    0x10(%ebp),%eax
085dde65 +0x0e5:  mov    %eax,(%edx)
085dde67 +0x0e7:  mov    -0x8(%ebp),%edx
085dde6a +0x0ea:  mov    0x8(%ebp),%ecx
085dde6d +0x0ed:  mov    %edx,%eax
085dde6f +0x0ef:  add    %eax,%eax
085dde71 +0x0f1:  add    %edx,%eax
085dde73 +0x0f3:  shl    $0x2,%eax
085dde76 +0x0f6:  movb   $0x1,0x10(%eax,%ecx,1)
085dde7b +0x0fb:  mov    0x8(%ebp),%eax
085dde7e +0x0fe:  movzbl (%eax),%eax
085dde81 +0x101:  lea    0x1(%eax),%edx
085dde84 +0x104:  mov    0x8(%ebp),%eax
085dde87 +0x107:  mov    %dl,(%eax)
085dde89 +0x109:  mov    $0x1,%eax
085dde8e +0x10e:  jmp    085ddea8 <+0x128>
085dde90 +0x110:  addl   $0x1,-0x8(%ebp)
085dde94 +0x114:  cmpl   $0x7,-0x8(%ebp)
085dde98 +0x118:  setle  %al
085dde9b +0x11b:  test   %al,%al
085dde9d +0x11d:  jne    085ddd93 <+0x13>
085ddea3 +0x123:  mov    $0x0,%eax
085ddea8 +0x128:  add    $0x10,%esp
085ddeab +0x12b:  pop    %ebx
085ddeac +0x12c:  pop    %ebp
085ddead +0x12d:  ret
```

## 反编译 C

```c
// PvP_GuildWar_Log::InsertPvPGuild @ 0x85ddd80

/* PvP_GuildWar_Log::InsertPvPGuild(unsigned int, int) */

undefined4 __thiscall
PvP_GuildWar_Log::InsertPvPGuild(PvP_GuildWar_Log *this,uint param_1,int param_2)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (7 < local_c) {
      return 0;
    }
    if (*(int *)(this + local_c * 0xc + 8) == 0) break;
    if (*(uint *)(this + local_c * 0xc + 8) == param_1) {
      *(int *)(this + local_c * 0xc + 0xc) = *(int *)(this + local_c * 0xc + 0xc) + param_2;
      this[local_c * 0xc + 0x10] = (PvP_GuildWar_Log)((char)this[local_c * 0xc + 0x10] + '\x01');
      return 1;
    }
    local_c = local_c + 1;
  }
  *(uint *)(this + local_c * 0xc + 8) = param_1;
  *(int *)(this + local_c * 0xc + 0xc) = param_2;
  this[local_c * 0xc + 0x10] = (PvP_GuildWar_Log)0x1;
  *this = (PvP_GuildWar_Log)((char)*this + '\x01');
  return 1;
}
```
