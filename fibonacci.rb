def fibo(n)
  return 1 if n == 0
  return 1 if n == 1
  fibo(n-1) + fibo(n-2)
end

n = (ARGV[0] || "32").to_i
puts "fibo(#{n}) = #{fibo(n)}"

