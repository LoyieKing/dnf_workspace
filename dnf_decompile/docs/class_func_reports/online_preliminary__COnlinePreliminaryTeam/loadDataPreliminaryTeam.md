# loadDataPreliminaryTeam

`_ZN18online_preliminary22COnlinePreliminaryTeam23loadDataPreliminaryTeamEPc`

`online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeam(char*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeam` | `0x085882b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085882b8  _ZN18online_preliminary22COnlinePreliminaryTeam23loadDataPreliminaryTeamEPc
#           online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeam(char*)
# range [0x085882b8, 0x08588319]
085882b8 +0x00:  push   %ebp
085882b9 +0x01:  mov    %esp,%ebp
085882bb +0x03:  sub    $0x28,%esp
085882be +0x06:  mov    0xc(%ebp),%eax
085882c1 +0x09:  mov    %eax,-0xc(%ebp)
085882c4 +0x0c:  mov    -0xc(%ebp),%eax
085882c7 +0x0f:  mov    (%eax),%edx
085882c9 +0x11:  mov    0x8(%ebp),%eax
085882cc +0x14:  mov    %edx,0x4(%eax)
085882cf +0x17:  mov    -0xc(%ebp),%eax
085882d2 +0x1a:  lea    0x4(%eax),%edx
085882d5 +0x1d:  mov    0x8(%ebp),%eax
085882d8 +0x20:  add    $0x14,%eax
085882db +0x23:  movl   $0xf,0x8(%esp)
085882e3 +0x2b:  mov    %edx,0x4(%esp)
085882e7 +0x2f:  mov    %eax,(%esp)
085882ea +0x32:  call   0807d8d0 <_init+0x1c8>
085882ef +0x37:  mov    -0xc(%ebp),%eax
085882f2 +0x3a:  mov    0x14(%eax),%edx
085882f5 +0x3d:  mov    0x8(%ebp),%eax
085882f8 +0x40:  mov    %edx,0x8(%eax)
085882fb +0x43:  mov    -0xc(%ebp),%eax
085882fe +0x46:  mov    0x18(%eax),%edx
08588301 +0x49:  mov    0x8(%ebp),%eax
08588304 +0x4c:  mov    %edx,0xc(%eax)
08588307 +0x4f:  mov    -0xc(%ebp),%eax
0858830a +0x52:  mov    0x1c(%eax),%edx
0858830d +0x55:  mov    0x8(%ebp),%eax
08588310 +0x58:  mov    %edx,0x10(%eax)
08588313 +0x5b:  mov    $0x1,%eax
08588318 +0x60:  leave
08588319 +0x61:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeam @ 0x85882b8

/* online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeam(char*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeam
          (COnlinePreliminaryTeam *this,char *param_1)

{
  *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  strncpy((char *)(this + 0x14),param_1 + 4,0xf);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x1c);
  return 1;
}
```
