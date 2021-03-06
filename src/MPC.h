#ifndef MPC_H
#define MPC_H

#include <vector>
#include "Eigen-3.3/Eigen/Core"

using namespace std;

class MPC {
 public:
  MPC();

  virtual ~MPC();

  // Solve the model given an initial state and polynomial coefficients.
  // Return the first actuatotions.
  vector<double> Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);

  std::vector<double> mpc_x_vals;
  std::vector<double> mpc_y_vals;

  double delta_prev {0};
  double a_prev {0};
};

#endif /* MPC_H */
