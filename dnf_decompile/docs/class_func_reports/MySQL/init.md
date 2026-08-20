# init

`_ZN5MySQL4initEv`

`MySQL::init()`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f3ce4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f3ce4  _ZN5MySQL4initEv
#           MySQL::init()
# range [0x083f3ce4, 0x083f3e73]
083f3ce4 +0x000:  push   %ebp
083f3ce5 +0x001:  mov    %esp,%ebp
083f3ce7 +0x003:  sub    $0x28,%esp
083f3cea +0x006:  mov    0x8(%ebp),%eax
083f3ced +0x009:  mov    %eax,(%esp)
083f3cf0 +0x00c:  call   083f3c16 <_ZN5MySQL14init_db_handleEv>  ; MySQL::init_db_handle()
083f3cf5 +0x011:  mov    %al,-0x9(%ebp)
083f3cf8 +0x014:  movzbl -0x9(%ebp),%eax
083f3cfc +0x018:  xor    $0x1,%eax
083f3cff +0x01b:  test   %al,%al
083f3d01 +0x01d:  je     083f3d0d <+0x29>
083f3d03 +0x01f:  mov    $0x0,%eax
083f3d08 +0x024:  jmp    083f3e71 <+0x18d>
083f3d0d +0x029:  mov    0x8(%ebp),%eax
083f3d10 +0x02c:  mov    %eax,(%esp)
083f3d13 +0x02f:  call   083f3afe <_ZN5MySQL19set_compress_optionEv>  ; MySQL::set_compress_option()
083f3d18 +0x034:  mov    %al,-0x9(%ebp)
083f3d1b +0x037:  movzbl -0x9(%ebp),%eax
083f3d1f +0x03b:  xor    $0x1,%eax
083f3d22 +0x03e:  test   %al,%al
083f3d24 +0x040:  je     083f3d30 <+0x4c>
083f3d26 +0x042:  mov    $0x0,%eax
083f3d2b +0x047:  jmp    083f3e71 <+0x18d>
083f3d30 +0x04c:  mov    0x8(%ebp),%eax
083f3d33 +0x04f:  mov    %eax,(%esp)
083f3d36 +0x052:  call   083f3b80 <_ZN5MySQL27set_read_default_grp_optionEv>  ; MySQL::set_read_default_grp_option()
083f3d3b +0x057:  mov    %al,-0x9(%ebp)
083f3d3e +0x05a:  movzbl -0x9(%ebp),%eax
083f3d42 +0x05e:  xor    $0x1,%eax
083f3d45 +0x061:  test   %al,%al
083f3d47 +0x063:  je     083f3d53 <+0x6f>
083f3d49 +0x065:  mov    $0x0,%eax
083f3d4e +0x06a:  jmp    083f3e71 <+0x18d>
083f3d53 +0x06f:  mov    0x8(%ebp),%eax
083f3d56 +0x072:  mov    %eax,(%esp)
083f3d59 +0x075:  call   083f3c02 <_ZN5MySQL23set_charset_name_optionEv>  ; MySQL::set_charset_name_option()
083f3d5e +0x07a:  mov    %al,-0x9(%ebp)
083f3d61 +0x07d:  movzbl -0x9(%ebp),%eax
083f3d65 +0x081:  xor    $0x1,%eax
083f3d68 +0x084:  test   %al,%al
083f3d6a +0x086:  je     083f3d76 <+0x92>
083f3d6c +0x088:  mov    $0x0,%eax
083f3d71 +0x08d:  jmp    083f3e71 <+0x18d>
083f3d76 +0x092:  mov    0x8(%ebp),%eax
083f3d79 +0x095:  mov    %eax,(%esp)
083f3d7c +0x098:  call   083f3c0c <_ZN5MySQL20set_reconnect_optionEv>  ; MySQL::set_reconnect_option()
083f3d81 +0x09d:  mov    %al,-0x9(%ebp)
083f3d84 +0x0a0:  movzbl -0x9(%ebp),%eax
083f3d88 +0x0a4:  xor    $0x1,%eax
083f3d8b +0x0a7:  test   %al,%al
083f3d8d +0x0a9:  je     083f3d99 <+0xb5>
083f3d8f +0x0ab:  mov    $0x0,%eax
083f3d94 +0x0b0:  jmp    083f3e71 <+0x18d>
083f3d99 +0x0b5:  mov    0x8(%ebp),%eax
083f3d9c +0x0b8:  add    $0x1c,%eax
083f3d9f +0x0bb:  movl   $0x6001,0x8(%esp)
083f3da7 +0x0c3:  movl   $0x0,0x4(%esp)
083f3daf +0x0cb:  mov    %eax,(%esp)
083f3db2 +0x0ce:  call   0807dcc0 <_init+0x5b8>
083f3db7 +0x0d3:  mov    0x8(%ebp),%eax
083f3dba +0x0d6:  movl   $0x0,0x42028(%eax)
083f3dc4 +0x0e0:  mov    0x8(%ebp),%eax
083f3dc7 +0x0e3:  movl   $0x0,0x8(%eax)
083f3dce +0x0ea:  mov    0x8(%ebp),%eax
083f3dd1 +0x0ed:  movl   $0x0,0x10(%eax)
083f3dd8 +0x0f4:  mov    0x8(%ebp),%eax
083f3ddb +0x0f7:  movl   $0x0,0x14(%eax)
083f3de2 +0x0fe:  mov    0x8(%ebp),%eax
083f3de5 +0x101:  movl   $0x0,0x18(%eax)
083f3dec +0x108:  mov    0x8(%ebp),%eax
083f3def +0x10b:  add    $0x42030,%eax
083f3df4 +0x110:  movl   $0x10,0x8(%esp)
083f3dfc +0x118:  movl   $0x0,0x4(%esp)
083f3e04 +0x120:  mov    %eax,(%esp)
083f3e07 +0x123:  call   0807dcc0 <_init+0x5b8>
083f3e0c +0x128:  mov    0x8(%ebp),%eax
083f3e0f +0x12b:  add    $0x42044,%eax
083f3e14 +0x130:  movl   $0x14,0x8(%esp)
083f3e1c +0x138:  movl   $0x0,0x4(%esp)
083f3e24 +0x140:  mov    %eax,(%esp)
083f3e27 +0x143:  call   0807dcc0 <_init+0x5b8>
083f3e2c +0x148:  mov    0x8(%ebp),%eax
083f3e2f +0x14b:  add    $0x4206c,%eax
083f3e34 +0x150:  movl   $0x1e,0x8(%esp)
083f3e3c +0x158:  movl   $0x0,0x4(%esp)
083f3e44 +0x160:  mov    %eax,(%esp)
083f3e47 +0x163:  call   0807dcc0 <_init+0x5b8>
083f3e4c +0x168:  mov    0x8(%ebp),%eax
083f3e4f +0x16b:  add    $0x42058,%eax
083f3e54 +0x170:  movl   $0x14,0x8(%esp)
083f3e5c +0x178:  movl   $0x0,0x4(%esp)
083f3e64 +0x180:  mov    %eax,(%esp)
083f3e67 +0x183:  call   0807dcc0 <_init+0x5b8>
083f3e6c +0x188:  mov    $0x1,%eax
083f3e71 +0x18d:  leave
083f3e72 +0x18e:  ret
083f3e73 +0x18f:  nop
```

## 反编译 C

```c
// MySQL::init @ 0x83f3ce4

/* MySQL::init() */

undefined4 __thiscall MySQL::init(MySQL *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = init_db_handle(this);
  if (cVar1 == '\x01') {
    cVar1 = set_compress_option(this);
    if (cVar1 == '\x01') {
      cVar1 = set_read_default_grp_option(this);
      if (cVar1 == '\x01') {
        cVar1 = set_charset_name_option();
        if (cVar1 == '\x01') {
          cVar1 = set_reconnect_option();
          if (cVar1 == '\x01') {
            memset(this + 0x1c,0,0x6001);
            *(undefined4 *)(this + 0x42028) = 0;
            *(undefined4 *)(this + 8) = 0;
            *(undefined4 *)(this + 0x10) = 0;
            *(undefined4 *)(this + 0x14) = 0;
            *(undefined4 *)(this + 0x18) = 0;
            memset(this + 0x42030,0,0x10);
            memset(this + 0x42044,0,0x14);
            memset(this + 0x4206c,0,0x1e);
            memset(this + 0x42058,0,0x14);
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
