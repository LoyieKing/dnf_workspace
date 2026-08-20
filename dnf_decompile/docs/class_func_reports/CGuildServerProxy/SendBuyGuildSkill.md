# SendBuyGuildSkill

`_ZN17CGuildServerProxy17SendBuyGuildSkillEjjiisj`

`CGuildServerProxy::SendBuyGuildSkill(unsigned int, unsigned int, int, int, short, unsigned int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e026` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e026  _ZN17CGuildServerProxy17SendBuyGuildSkillEjjiisj
#           CGuildServerProxy::SendBuyGuildSkill(unsigned int, unsigned int, int, int, short, unsigned int)
# range [0x0846e026, 0x0846e083]
0846e026 +0x00:  push   %ebp
0846e027 +0x01:  mov    %esp,%ebp
0846e029 +0x03:  sub    $0x48,%esp
0846e02c +0x06:  mov    0x1c(%ebp),%eax
0846e02f +0x09:  mov    %ax,-0x2c(%ebp)
0846e033 +0x0d:  lea    -0x28(%ebp),%eax
0846e036 +0x10:  mov    %eax,(%esp)
0846e039 +0x13:  call   0846f3fc <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x1cc>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x1cc
0846e03e +0x18:  mov    0xc(%ebp),%eax
0846e041 +0x1b:  mov    %eax,-0x1e(%ebp)
0846e044 +0x1e:  mov    0x10(%ebp),%eax
0846e047 +0x21:  mov    %eax,-0x1a(%ebp)
0846e04a +0x24:  mov    0x14(%ebp),%eax
0846e04d +0x27:  mov    %eax,-0x16(%ebp)
0846e050 +0x2a:  mov    0x18(%ebp),%eax
0846e053 +0x2d:  mov    %eax,-0x12(%ebp)
0846e056 +0x30:  movzwl -0x2c(%ebp),%eax
0846e05a +0x34:  mov    %ax,-0xe(%ebp)
0846e05e +0x38:  mov    0x20(%ebp),%eax
0846e061 +0x3b:  mov    %eax,-0xc(%ebp)
0846e064 +0x3e:  movzwl -0x26(%ebp),%eax
0846e068 +0x42:  movzwl %ax,%edx
0846e06b +0x45:  lea    -0x28(%ebp),%eax
0846e06e +0x48:  mov    %edx,0x8(%esp)
0846e072 +0x4c:  mov    %eax,0x4(%esp)
0846e076 +0x50:  mov    0x8(%ebp),%eax
0846e079 +0x53:  mov    %eax,(%esp)
0846e07c +0x56:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846e081 +0x5b:  leave
0846e082 +0x5c:  ret
0846e083 +0x5d:  nop
```

## 反编译 C

```c
// CGuildServerProxy::SendBuyGuildSkill @ 0x846e026

/* CGuildServerProxy::SendBuyGuildSkill(unsigned int, unsigned int, int, int, short, unsigned int)
    */

void __thiscall
CGuildServerProxy::SendBuyGuildSkill
          (CGuildServerProxy *this,uint param_1,uint param_2,int param_3,int param_4,short param_5,
          uint param_6)

{
  Packet_Monitor_Buy_Guild_Skill local_2c [2];
  ushort local_2a;
  uint local_22;
  uint local_1e;
  int local_1a;
  int local_16;
  short local_12;
  uint local_10;
  
  Packet_Monitor_Buy_Guild_Skill::Packet_Monitor_Buy_Guild_Skill(local_2c);
  local_22 = param_1;
  local_1e = param_2;
  local_1a = param_3;
  local_16 = param_4;
  local_10 = param_6;
  local_12 = param_5;
  SendTcpPacket(this,(char *)local_2c,(uint)local_2a);
  return;
}
```
