# SetNoticeMessage

`_ZN22GameServerDemonManager16SetNoticeMessageEhPc`

`GameServerDemonManager::SetNoticeMessage(unsigned char, char*)`

| 类 | 地址 |
|---|---|
| `GameServerDemonManager` | `0x080f6280` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f6280  _ZN22GameServerDemonManager16SetNoticeMessageEhPc
#           GameServerDemonManager::SetNoticeMessage(unsigned char, char*)
# range [0x080f6280, 0x080f62d2]
080f6280 +0x00:  push   %ebp
080f6281 +0x01:  mov    %esp,%ebp
080f6283 +0x03:  sub    $0x28,%esp
080f6286 +0x06:  mov    0xc(%ebp),%eax
080f6289 +0x09:  mov    %al,-0xc(%ebp)
080f628c +0x0c:  mov    0x8(%ebp),%eax
080f628f +0x0f:  movzbl -0xc(%ebp),%edx
080f6293 +0x13:  mov    %dl,0x1(%eax)
080f6296 +0x16:  mov    0x8(%ebp),%eax
080f6299 +0x19:  add    $0x2,%eax
080f629c +0x1c:  movl   $0xff,0x8(%esp)
080f62a4 +0x24:  movl   $0x0,0x4(%esp)
080f62ac +0x2c:  mov    %eax,(%esp)
080f62af +0x2f:  call   0807dcc0 <_init+0x5b8>
080f62b4 +0x34:  movzbl -0xc(%ebp),%eax
080f62b8 +0x38:  mov    0x8(%ebp),%edx
080f62bb +0x3b:  add    $0x2,%edx
080f62be +0x3e:  mov    %eax,0x8(%esp)
080f62c2 +0x42:  mov    0x10(%ebp),%eax
080f62c5 +0x45:  mov    %eax,0x4(%esp)
080f62c9 +0x49:  mov    %edx,(%esp)
080f62cc +0x4c:  call   0807d8a0 <_init+0x198>
080f62d1 +0x51:  leave
080f62d2 +0x52:  ret
```

## 反编译 C

```c
// GameServerDemonManager::SetNoticeMessage @ 0x80f6280

/* GameServerDemonManager::SetNoticeMessage(unsigned char, char*) */

void __thiscall
GameServerDemonManager::SetNoticeMessage(GameServerDemonManager *this,uchar param_1,char *param_2)

{
  this[1] = (GameServerDemonManager)param_1;
  memset(this + 2,0,0xff);
  memcpy(this + 2,param_2,(uint)param_1);
  return;
}
```
